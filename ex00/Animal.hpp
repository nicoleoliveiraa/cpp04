/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:58:33 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 18:20:46 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& src);
	Animal& operator=(const Animal& src);
	~Animal()

	virtual void makeSound();
};

#endif // ANIMAL_HPP