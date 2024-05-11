//
// Created by Jules Cayot on 02/05/2024.
//

#include "Zombie.h"

Zombie::Zombie(std::string name) {
	this -> name = name;
}

Zombie::~Zombie() {
	std::cout << name << ": NOOOOOOOOOO my only weakness the destructor!\n";
}

void Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
}
