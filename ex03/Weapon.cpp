//
// Created by Jules Cayot on 02/05/2024.
//

#include "Weapon.h"

Weapon::Weapon(std::string type) {
	this -> type = type;
}

Weapon::Weapon() {

}

Weapon::~Weapon() {

}

std::string Weapon::getType() {
	return (this -> type);
}

void Weapon::setType(std::string type) {
	this -> type = type;
}
