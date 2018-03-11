#include "Speed.h"
#include <iostream>


Speed::Speed()
{
	current = 0;
}

void Speed::switch_up()
{
	if (current < 5)
		current++;
}

void Speed::switch_down()
{
	if (current > 0)
		current--;
}

void Speed::print_current_sound()
{
	switch (current)
	{
	case 0:
		std::cout << "*zzz*";
		break;
	case 1:
		std::cout << "R";
		break;
	case 2:
		std::cout << "Rr";
		break;
	case 3:
		std::cout << "Rrr";
		break;
	case 4:
		std::cout << "Brrrm";
		break;
	case 5:
		std::cout << "Brrrrrrrrrrrrrrrrrm!";
		break;
	default:
		break;
	}
}
