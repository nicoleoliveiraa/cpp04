/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:38:30 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/22 17:00:33 by nsouza-o         ###   ########.fr       */
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
	//Character other(someone);
	someone.equip(ice);
	someone.equip(cure);
	//other = someone;
}