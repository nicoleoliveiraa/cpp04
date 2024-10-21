/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:19:27 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 10:38:30 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "The cat started to meow! 🐱" << std::endl;
} 