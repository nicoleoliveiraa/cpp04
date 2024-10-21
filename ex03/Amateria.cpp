/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:18:09 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 16:46:00 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called!" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria constructor with parameters called!" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	std::cout << "AMateria copy constructor called!" << std::endl;
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "AMateria copy assignment operator called!" << std::endl;
	(void)src;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called!" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}


