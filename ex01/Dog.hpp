/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:10:47 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/24 13:46:34 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define BOLD_GREEN   "\033[1m\033[32m"
#define BOLD_YELLOW  "\033[1m\033[33m"
#define BOLD_WHITE   "\033[1m\033[37m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"



class Dog : public Animal {
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& src);
	Dog& operator=(const Dog& src);
	virtual ~Dog();

	void makeSound() const;
};

#endif // DOG_HPP