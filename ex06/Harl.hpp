//
// Created by jules on 08/05/2024.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();

		static int	getLevel(std::string level);

		void	complain(std::string level);

};


#endif //HARL_HPP
