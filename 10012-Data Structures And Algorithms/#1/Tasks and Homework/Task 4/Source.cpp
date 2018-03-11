#include <iostream>
#include "Speed.h"
int main() {
	Speed s;
	for (size_t i = 0; i < 6; i++)
	{
		s.print_current_sound();
		std::cout << std::endl;
		s.switch_up();
	}
	s.switch_up();
	s.print_current_sound();
	std::cout << std::endl;
	for (int i = 6 - 1; i >= 0; i--)
	{
		s.print_current_sound();
		std::cout << std::endl;
		s.switch_down();
	}
	s.switch_down();
	s.print_current_sound();

	return 0;
}