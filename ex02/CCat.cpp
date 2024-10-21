/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CCat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:19:51 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 11:12:22 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CCat.hpp"

CCat::CCat()
{
	AAnimal::type = "CCat";
	this->brain = new Brain;
	std::cout << BOLD_CYAN << "CCAT " << BOLD_WHITE;
	std::cout << "default constructor called!" << RESET << std::endl;
}

CCat::CCat(const CCat& src) : AAnimal()
{
	std::cout << "CCat copy constructor called!" << std::endl;
	*this = src;
}

CCat& CCat::operator=(const CCat& src)
{
	std::cout << "CCat copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		brain = new Brain();
	}
	return (*this);
}

CCat::~CCat()
{
	std::cout << CYAN << "CCAT " << WHITE;
	std::cout << "destructor called!" << RESET << std::endl;
	delete brain;
}

void CCat::makeSound() const
{
	std::cout << "The " << BOLD_CYAN << "CCAT " << RESET << "started to meow: ";
	std::cout << BOLD_WHITE << "MEW MEW! 🐱" << RESET << std::endl;
}