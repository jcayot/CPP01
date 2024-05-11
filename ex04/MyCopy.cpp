//
// Created by jules on 04/05/2024.
//

#include "MyCopy.hpp"

int	MyCopy::RunMyCopy(std::string &filename, std::string &s1, std::string &s2) {
	std::ifstream	inFile;
	std::ofstream	outFile;
	int 			result;

	if (!openFiles(filename, inFile, outFile))
		return (1);
	result = copyReplace(s1, s2, inFile, outFile);
	inFile.close();
	outFile.close();
	return (result);
}

int	MyCopy::openFiles(std::string &filename, std::ifstream &inFile, std::ofstream &outFile) {
	inFile.open(filename, std::ios::in);
	if (!inFile.is_open())
	{
		std::cout << "Error opening " << filename << std::endl;
		return (0);
	}
	outFile.open(filename + ".replace", std::ios::out);
	if (!outFile.is_open())
	{
		inFile.close();
		std::cout << "Error creating " << filename << ".replace" << std::endl;
		return (0);
	}
	return (1);
}

int	MyCopy::copyReplace(std::string &s1, std::string &s2, std::ifstream &inFile, std::ofstream &outFile) {
	char	lastRead;

	while (inFile >> std::noskipws >> lastRead) {
		std::string	readBuffer;
		unsigned long	i = 0;

		readBuffer += lastRead;
		while (i < s1.length() - 1 && lastRead == s1[i] && inFile >> std::noskipws >> lastRead) {
			readBuffer += lastRead;
			i++;
		}
		if (i == s1.length() - 1 && lastRead == s1[i])
			outFile << s2;
		else
			outFile << readBuffer;
	}
	return (1);
}
