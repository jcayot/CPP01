//
// Created by Jules Cayot on 02/05/2024.
//

#include "Zombie.h"

Zombie *newZombie(std::string name) {
	return (new Zombie(name));
}
