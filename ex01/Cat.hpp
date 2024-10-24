/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:14 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/24 13:46:24 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define BOLD_GREEN   "\033[1m\033[32m"
#define BOLD_YELLOW  "\033[1m\033[33m"
#define BOLD_WHITE   "\033[1m\033[37m"
#define WHITE   "\033[37m"
#define YELLOW  "\033[33m"

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& src);
	Cat& operator=(const Cat& src);
	virtual ~Cat();

	void makeSound() const;
};

#endif // CAT_HPP