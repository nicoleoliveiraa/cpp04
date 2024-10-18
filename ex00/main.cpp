/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:16:59 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/18 15:33:49 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "The type of this animal is " << j->getType() << " " << std::endl;
		std::cout << "The type of this animal is " << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	std::cout << "\n" << std::endl;
	{
		const WrongAnimal* cat = new WrongCat();
		std::cout << "The type of this animal is " << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!

		delete cat;
	}

	return 0;
}