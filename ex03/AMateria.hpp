/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:04:40 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 16:46:48 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;
	bool onFloor;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& src);
	AMateria& operator=(const AMateria& src);
	virtual ~AMateria();

	std::string const & getType() const;
	bool const & isOnFloor() const;
	void setOnFloor();
	
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
};

#endif // AMATERIA_HPP