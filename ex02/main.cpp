//
// Created by Jules Cayot on 02/05/2024.
//

#include <string>
#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string : " << &string << "\n";
	std::cout << "Address held by stringPTR : " << stringPTR << "\n";
	std::cout << "Address held by stringREF : " << &stringREF << "\n";

	std::cout << "Value of string : " << string << "\n";
	std::cout << "Value pointed by stringPTR : " << *stringPTR << "\n";
	std::cout << "Value pointed by stringREF : " << stringREF << "\n";
}
