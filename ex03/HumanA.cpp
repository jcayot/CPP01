//
// Created by Jules Cayot on 02/05/2024.
//

#include "HumanA.h"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
