//
// Created by Jules Cayot on 02/05/2024.
//

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif //ZOMBIE_H
