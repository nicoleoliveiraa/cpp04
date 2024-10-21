/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:00:13 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 11:06:14 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout << "AAnimal copy constructor called!" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
	std::cout << "AAnimal copy assignment operator called!" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}