//
// Created by Jules Cayot on 02/05/2024.
//

#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H


#include <string>
#include <iostream>
#include "Weapon.h"

class HumanB {
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif //CPP01_HUMANB_H
