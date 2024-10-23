/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:59:48 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 18:52:43 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "MateriaSource copy constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i] != NULL)
			this->_materias[i] = src._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "MateriaSource copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (src._materias[i] != NULL)
				this->_materias[i] = src._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* src)
{
	std::cout << "LearnMateria called: Storing materia of type " << src->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = src;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
    {
        if(this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << "Creating Materia of type: " << type << std::endl;
            return (_materias[i]->clone());
		}
    }
	std::cout << "Failed to create Materia: type '" << type << "' has not been learned yet." << std::endl;
    return (0);
}