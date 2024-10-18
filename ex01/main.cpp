/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:16:59 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/18 17:58:37 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		j->makeSound();
		i->makeSound();
		delete j;
		delete i;
	}
	std::cout << "\n" << std::endl;
	{
		const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
		for ( int i = 0; i < 4; i++ ) {
			delete animals[i];
		}
	}
	std::cout << "\n" << std::endl;
	{
		Dog myDog;
		Dog otherDog = myDog;
	}
	std::cout << "\n" << std::endl;
	{
		Cat myCat;
		Cat otherCat = myCat;
	}
	
	return 0;
}