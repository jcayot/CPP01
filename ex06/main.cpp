//
// Created by jules on 08/05/2024.
//

#include "Harl.hpp"

int main(int n, char *args[]) {
	if (n == 2) {
		int	level = Harl::getLevel(args[1]);

		switch (level) {
			case (-1):
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
			case 0:
				Harl().complain("DEBUG");
			case 1:
				Harl().complain("INFO");
			case 2:
				Harl().complain("WARNING");
			case 3:
				Harl().complain("ERROR");
		}
		return (0);
	} else
		return (1);
}
