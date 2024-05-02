//
// Created by Jules Cayot on 02/05/2024.
//

#include "Zombie.h"

int	main() {
	Zombie	*zombie = newZombie("Zombie pointer");
	zombie -> announce();
	randomChump("Stack Zombie");
	delete zombie;
	return (0);
}
