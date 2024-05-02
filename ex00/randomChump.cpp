//
// Created by Jules Cayot on 02/05/2024.
//

#include "Zombie.h"

void randomChump(std::string name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}
