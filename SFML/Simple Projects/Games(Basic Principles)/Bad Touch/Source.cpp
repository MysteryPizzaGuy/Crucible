#include <SFML/Graphics.hpp>
#include "EvilBlocks.h"

void InitRect(sf::RectangleShape& rect, const sf::Vector2f & pos, const sf::Color & color) {
	rect.setFillColor(color);
	rect.setPosition(pos);
	rect.setOrigin(rect.getSize()*0.5f); //Sets the origin at the center of the rect.
}

int main() {
	sf::RenderWindow window(sf::VideoMode(480, 180), "Bad Touch");
	//Setting frames per second
	window.setFramerateLimit(60);
	sf::RectangleShape player(sf::Vector2f(10, 10));
	const sf::Vector2f spawnpoint(50, 50);
	InitRect(player, spawnpoint, sf::Color::Blue);
	const int Howmanyenemies = 5;
	EvilBlocks enemies (Howmanyenemies);
	while (window.isOpen())
	{
		for (size_t i = 0; i < Howmanyenemies; i++)
		{
			//Failure State
			if (enemies.GetEnemy(i).getGlobalBounds().intersects(player.getGlobalBounds())) {
				player.setPosition(spawnpoint);
			}
		}

		//FrameUpdates
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
			player.move(1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
			player.move(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
			player.move(0, 1);
		}


		//Frame Rendering
		window.clear();
		//window drawing
		window.draw(player);
		for (size_t i = 0; i < Howmanyenemies; i++)
		{
			window.draw(enemies.GetEnemy(i));
		}
		window.display();
	}



	return 0;
}