/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:04:40 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/22 14:52:05 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria {
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& src);
	AMateria& operator=(const AMateria& src);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP