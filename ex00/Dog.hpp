/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:10:47 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 18:14:40 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

class Dog : Public Animal {
public:
	Dog();
	Dog(const Dog& src);
	Dog& operator=(const Dog& src);
	~Dog()

	void makeSound();
};

#endif // DOG_HPP