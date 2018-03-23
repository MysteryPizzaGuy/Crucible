#pragma once
#include <SFML/Graphics.hpp>
#include <fstream>
#include <vector>
class Editor
{
public:
	Editor();
	
	void WritePosToFile(sf::ConvexShape towrite);
	void ReadPosFromFile(sf::ConvexShape& toread);
	void DragToMoveShape(sf::Event& event);
	int FindCurrentMousedOverShape(std::vector<sf::Shape>& alltheshapes, sf::Event& event, sf::RenderWindow& window);
private:
};

