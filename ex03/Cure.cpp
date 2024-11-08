/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:11 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 19:32:46 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called!" << std::endl;
}

Cure::Cure(const Cure& src): AMateria("cure")
{
	std::cout << "Cure copy constructor called!" << std::endl;
	*this = src;
}

Cure& Cure::operator=(const Cure& src)
{
	std::cout << "Cure copy assignment operator called!" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called!" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "Cure clone was created!" << std::endl;
	return new Cure(*this);
}

std::string Cure::getType() const
{
	return (this->type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
