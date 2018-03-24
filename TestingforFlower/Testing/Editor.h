#pragma once
#include <SFML/Graphics.hpp>
#include <fstream>
#include <vector>
class Editor
{
public:
	Editor(sf::RenderWindow* window);

	void WritePosToFile(sf::RectangleShape towrite);
	void ReadPosFromFile(sf::RectangleShape& toread);
	void DragToMoveShape(sf::Event & event, std::vector<sf::RectangleShape>& alltheshapes);
	int FindCurrentMousedOverShape(std::vector<sf::RectangleShape>& alltheshapes, sf::Event& event);
	void MoveMouse(sf::Event & event, std::vector<sf::RectangleShape>& alltheshapes);
	int FindCurrentMouseOveredPoint(std::vector<sf::RectangleShape>& alltheshapes, sf::Event& event);
private:
	sf::RenderWindow* window;
};

