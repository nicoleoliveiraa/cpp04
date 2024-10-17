/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:14 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/17 18:15:55 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

class Cat : Public Animal {
public:
	Cat();
	Cat(const Cat& src);
	Cat& operator=(const Cat& src);
	~Cat()

	void makeSound();
};

#endif // CAT_HPP