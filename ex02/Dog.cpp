/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:11:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 10:37:57 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	Animal::type = "Dog";
	this->brain = new Brain();
	std::cout << BOLD_GREEN << "DOG " << BOLD_WHITE;
	std::cout << "default constructor called!" << RESET << std::endl;
}

Dog::Dog(const Dog& src) : Animal()
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		brain = new Brain();
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	std::cout << GREEN << "DOG " << WHITE;
	std::cout << "destructor called!" << RESET << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "The " << BOLD_GREEN << "DOG " << RESET << "started to bark: ";
	std::cout << BOLD_WHITE << "WOOF WOOF! 🐶" << RESET << std::endl;
} 