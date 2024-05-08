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
		static int openFiles(std::string &filename, std::ifstream &inFile, std::ofstream &outFile);
		static int copyReplace(std::string &s1, std::string &s2, std::ifstream &inFile, std::ofstream &outFile);

	public:
		static int	RunMyCopy(std::string &filename, std::string &s1, std::string &s2);
};


#endif //MYCOPY_HPP
