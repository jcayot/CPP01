//
// Created by jules on 04/05/2024.
//

#ifndef MYCOPY_HPP
#define MYCOPY_HPP


#include <string>
#include <fstream>
#include <iostream>

class MyCopy {
	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;

		int	openFiles(std::ifstream &inFile, std::ofstream &outFile);
		int copyReplace(std::ifstream &inFile, std::ofstream &outFile);

public:
		MyCopy(std::string &filename, std::string &s1, std::string &s2);

		int run();
};


#endif //MYCOPY_HPP
