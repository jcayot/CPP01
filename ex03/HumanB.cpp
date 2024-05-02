//
// Created by Jules Cayot on 02/05/2024.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) {
	this -> name = name;
}


HumanB::~HumanB() {

}

void HumanB::attack() {
		std::cout << name << " attacks with their " << weapon -> getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon) {
	this -> weapon = &weapon;
}
