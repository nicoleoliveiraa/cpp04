/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:38:30 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 19:48:41 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main(void)
{
	///* Materia source tests */
	Character someone("Max");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	someone.equip(src->createMateria("cure"));
	someone.equip(src->createMateria("ice"));
	someone.unequip(0);
	Character::clearFloor();
	delete src;
	
	///* Materia tests */
	// AMateria* ice = new Ice;
	// AMateria* cure = new Cure;
	// AMateria* otherIce = ice.clone();
	// delete otherIce;
	
	// Character other("Still");
	// someone.equip(ice);
	// //someone.equip(cure);
	// someone.printInventory();
	// someone.unequip(0);
	// someone.unequip(5);
	// someone.printInventory();
	// someone.use(0, someone);
	
	// std::cout << std::endl;
	
	// other.equip(cure);
	// other.use(0, someone);

	// Character::clearFloor();
	// //other = someone;
	// std::cout << std::endl;


	///* Subject tests */
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	
	return 0;
	
}