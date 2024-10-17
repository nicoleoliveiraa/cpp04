/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:00:13 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 18:10:03 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = src;
}

Animal::Animal& operator=(const Animal& src)
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (*this != src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}