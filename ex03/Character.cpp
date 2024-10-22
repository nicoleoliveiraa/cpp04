/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:16:20 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/22 17:53:14 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called, and created " << _name;
	std::cout << "!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character& src)
{
	std::cout << "Character copy constructor called!" << std::endl;
	*this = src;
}

Character& Character::operator=(const Character& src)
{
	std::cout << "Character copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		for (int i = 0; i < 4; i++)
		{
			if (src.inventory[i] != NULL)
				this->inventory[i] = src.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called, and destroied " << _name;
	std::cout << "!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int index;
	
	if (!m)
	{
		std::cout << "Tried to equip an unexistent material!" << std::endl;	
		return ;
	}
	index = 0;		
	while (this->inventory[index] != NULL)
		index++;
	if (index < 4)
	{
		std::cout << "The character " << _name << " was equipped with a " << m->getType();
		std::cout << "!" << std::endl;
		this->inventory[index] = m;
	}
	else
	{
		std::cout << "The character " << _name << " tried to equip with " << m->getType();
		std::cout << "but the inventory is already full!" << std::endl;
	}	
}

void Character::drop(AMateria* dropped)
{
	int index = 0;
	while (this->floor[index])
		index++;
	
}

void Character::unequip(int idx)
{
	if (idx >= 0 || idx <= 3)
	{
		if (this->inventory[idx] != NULL)
		{
			drop(this->inventory[idx]);
			this->inventory[idx] = NULL;
		}
	}
}