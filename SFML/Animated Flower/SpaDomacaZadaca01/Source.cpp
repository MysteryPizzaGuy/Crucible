#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include "Editor.h"
int main()
{
	//Use Scrollwheel to scale, drag and drop to move,rotate with pageup and pagedown, save current state with s.
	sf::RenderWindow window(sf::VideoMode(400, 400), "Editor Flower");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);
	Editor ed(&window);
	std::vector<sf::ConvexShape> alltheshapes;
	cvijet.Init(alltheshapes);
	ed.LoadsShapestoFile(alltheshapes);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			ed.DragToMoveShape(event, alltheshapes);//Despite its name it also handles Scaling, and Rotation and Dragging.
			if (event.type == sf::Event::EventType::KeyPressed) {
				if (event.key.code==sf::Keyboard::Key::S)
				{
					ed.SaveShapestoFile(alltheshapes);
				}
			}
		}
		window.clear();
		cvijet.draw(alltheshapes);
		window.display();
	}

	return 0;
}