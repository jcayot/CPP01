//
// Created by Jules Cayot on 02/05/2024.
//

#include "MyCopy.hpp"

int	main(int n, char *args[]) {
	if (n != 4)
		return (1);
	std::string	filename(args[1]);
	std::string	s1(args[2]);
	std::string	s2(args[3]);
	return (!MyCopy::RunMyCopy(filename, s1, s2));
}
