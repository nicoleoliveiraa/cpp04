/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:54:26 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 16:26:43 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called!" << std::endl;
}

Ice::Ice(const Ice& src): AMateria(src)
{
	std::cout << "Ice copy constructor called!" << std::endl;
	*this = src;
}

Ice& Ice::operator=(const Ice& src)
{
	std::cout << "Ice copy assignment operator called!" << std::endl;
	(void)src;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called!" << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice clone was created!" << std::endl;
	return new Ice(*this);
}

std::string Ice::getType() const
{
	return (this->type);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}