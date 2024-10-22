/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:24 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/22 17:52:07 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
protected:
	std::string _name;
	AMateria* inventory[4];
	AMateria* floor[10];
public:
	Character();
	Character(std::string name);
	Character(const Character& src);
	Character& operator=(const Character& src);
	
	void drop(AMateria* dropped);
	
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	// virtual void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP