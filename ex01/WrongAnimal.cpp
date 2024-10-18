/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:18:04 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/18 15:18:13 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const 
{
	std::cout << "Some random animal sound started! 🦖 🦣  🐡" << std::endl;
}