//
// Created by Jules Cayot on 02/05/2024.
//

#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.h"

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();

		void attack();
};

#endif //CPP01_HUMANA_H
