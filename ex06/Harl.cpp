//
// Created by jules on 08/05/2024.
//

#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

int Harl::getLevel(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			return (i);
	}
	return (-1);
}

void Harl::complain(std::string level) {
	void (Harl::*levelFunctions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int levelNumber = getLevel(level);
	if (levelNumber == -1)
		std::cout << "Invalid complain level." << std::endl;
	else
		(this->*levelFunctions[levelNumber])();
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup"
				 " burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				 " enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				 " years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
