#include "Editor.h"
#include <sstream>


Editor::Editor()
{
}



void Editor::WritePosToFile(sf::ConvexShape towrite)
{
	std::ofstream Out("ShapePositions.csv");
	for (size_t i = 0; i < towrite.getPointCount(); i++)
	{
		Out << towrite.getPoint(i).x << ';' << towrite.getPoint(i).y << ',';
	}
	Out<<std::endl;
	Out.close();
}

void Editor::ReadPosFromFile(sf::ConvexShape & toread)
{
	std::ifstream In("ShapePositions.csv");
	std::stringstream ss;
	for (size_t i = 0; i < toread.getPointCount(); i++)
	{
		std::string line;
		getline(In, line,';');
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

int Editor::FindCurrentMousedOverShape(std::vector<sf::Shape>& alltheshapes, sf::Event& event, sf::RenderWindow& window)
{

	for (auto i = alltheshapes.end() - 1; i >= alltheshapes.begin(); i--)
	{
		if (i->getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition())));
		{
			return i - alltheshapes.begin();
		}
	}
	return -1;
}

void Editor::DragToMoveShape(sf::Event & event,std::vector<sf::Shape>& alltheshapes)
{
	if (event.type ==sf::Event::EventType::MouseButtonPressed)
	{
		if (event.key.code == sf::Mouse::Left)
		{

			if (true)
			{
			}
		}
	}
}

