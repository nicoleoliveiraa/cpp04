/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:19:51 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 18:24:55 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Animal::type = "Cat";
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = src;
}

Cat::Cat& operator=(const Cat& src)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (*this != src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "The cat started to meow! 🐱" << std::endl;
} 