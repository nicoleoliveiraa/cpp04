/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:38:30 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 16:49:48 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	AMateria* ice = new Ice;
	AMateria* cure = new Cure;
	// AMateria* otherIce = ice.clone();
	// delete otherIce;

	Character someone("Max");
	Character other("Still");
	someone.equip(ice);
	//someone.equip(cure);
	someone.printInventory();
	someone.unequip(0);
	someone.unequip(5);
	someone.printInventory();
	someone.use(0, someone);
	
	std::cout << std::endl;
	
	other.equip(cure);
	other.use(0, someone);

	Character::clearFloor();
	//other = someone;
}