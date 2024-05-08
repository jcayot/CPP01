//
// Created by jules on 08/05/2024.
//

#include "Harl.hpp"

int main() {
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "Not in the list"};
	for (int i = 0; i < 5; i++)
		Harl().complain(levels[i]);
	return (0);
}
