/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:52:53 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 16:24:45 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice& src);
	Ice& operator=(const Ice& src);
	~Ice();

	std::string getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
}; 

#endif // ICE_HPP