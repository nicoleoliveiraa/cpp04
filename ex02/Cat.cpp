/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:19:51 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 10:36:59 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::type = "Cat";
	this->brain = new Brain;
	std::cout << BOLD_YELLOW << "CAT " << BOLD_WHITE;
	std::cout << "default constructor called!" << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		brain = new Brain();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << YELLOW << "CAT " << WHITE;
	std::cout << "destructor called!" << RESET << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "The " << BOLD_YELLOW << "CAT " << RESET << "started to meow: ";
	std::cout << BOLD_WHITE << "MEW MEW! 🐱" << RESET << std::endl;
}