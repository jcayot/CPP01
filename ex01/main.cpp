//
// Created by Jules Cayot on 02/05/2024.
//

#include "Zombie.h"

int main() {
	for (int i = 1; i < 10; i++) {
		std::cout << "\nTest " << std::to_string(i) << " zombies : \n";
		Zombie *zombies = zombieHorde(i, "Zombie");
		for (int j = 0; j < i; j++)
			zombies -> announce();
		delete [] zombies;
		std::cout << "\n";
	}
}
