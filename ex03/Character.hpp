/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:24 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 16:54:39 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
protected:
	std::string _name;
	AMateria* inventory[4];
	static AMateria* floor[5];
public:
	Character();
	Character(std::string name);
	Character(const Character& src);
	Character& operator=(const Character& src);
	
	void drop(AMateria* dropped);
	void printInventory();
	static void clearFloor();
	
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP