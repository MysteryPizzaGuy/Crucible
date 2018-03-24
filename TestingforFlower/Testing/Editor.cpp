#include "Editor.h"
#include <sstream>


Editor::Editor(sf::RenderWindow* window)
{
	this->window = window;
}



void Editor::WritePosToFile(sf::RectangleShape towrite)
{
	std::ofstream Out("ShapePositions.csv");
	for (size_t i = 0; i < towrite.getPointCount(); i++)
	{
		Out << towrite.getPoint(i).x << ';' << towrite.getPoint(i).y << ',';
	}
	Out << std::endl;
	Out.close();
}

void Editor::ReadPosFromFile(sf::RectangleShape & toread)
{
	std::ifstream In("ShapePositions.csv");
	std::stringstream ss;
	for (size_t i = 0; i < toread.getPointCount(); i++)
	{
		std::string line;
		getline(In, line, ';');
		ss << line;
		float x;
		ss >> x;
		getline(In, line, ',');
		ss << line;
		float y;
		ss >> y;
		toread.getPoint(i) = sf::Vector2f(x, y);
	}
	In.close();

}

int Editor::FindCurrentMousedOverShape(std::vector<sf::RectangleShape>& alltheshapes, sf::Event& event)
{

	for (auto i = alltheshapes.end() - 1; i >= alltheshapes.begin(); i--)
	{
		if (i->getGlobalBounds().contains(window->mapPixelToCoords(sf::Mouse::getPosition(*window))));
		{
			return i - alltheshapes.begin();
		}
	}
	return -1;
}

int Editor::FindCurrentMouseOveredPoint(std::vector<sf::RectangleShape>& alltheshapes, sf::Event & event)
{
	for (size_t i = 0; i < alltheshapes[FindCurrentMousedOverShape(alltheshapes, event)].getPointCount(); i++)
	{
		alltheshapes[FindCurrentMousedOverShape(alltheshapes, event)].
	}

	return 0;
}

//void Editor::MoveMouse(sf::Event & event, std::vector<sf::RectangleShape>& alltheshapes)
//{
//	if (int i = FindCurrentMousedOverShape(alltheshapes, event) >0 && event.type == sf::Event::MouseMoved && sf::Mouse::isButtonPressed(sf::Mouse::Left))//Makes sure that there is a shape being moused over
//	{
//		alltheshapes[i].move(window->mapPixelToCoords(sf::Mouse::getPosition()) - prevpos);
//	}
//
//}

void Editor::DragToMoveShape(sf::Event & event, std::vector<sf::RectangleShape>& alltheshapes)
{
	if (event.type == sf::Event::EventType::MouseButtonPressed)
	{
		if (event.key.code == sf::Mouse::Left)
		{

			if (int i = FindCurrentMousedOverShape(alltheshapes, event) >0)//Makes sure that there is a shape being moused over
			{
				starting_position.x = event.mouseButton.x;
				starting_position.y = event.mouseButton.y;

			}
			if (event.type == sf::Event::MouseMoved && sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				current_position.x = event.mouseMove.x - starting_position.x;
				current_position.y = event.mouseMove.y - starting_position.y;

			}
			if (int i = FindCurrentMousedOverShape(alltheshapes, event) >0)//Makes sure that there is a shape being moused over
			{
				alltheshapes[i].setPosition(current_position.x,current_position.y);

			}
		}
	}

}


