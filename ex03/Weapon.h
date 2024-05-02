//
// Created by Jules Cayot on 02/05/2024.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();

		std::string	getType();
		void setType(std::string type);
};


#endif //WEAPON_H
