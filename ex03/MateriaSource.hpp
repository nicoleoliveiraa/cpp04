/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:58:06 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/23 18:38:59 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
protected:
	AMateria* _materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& src);
	MateriaSource& operator=(const MateriaSource& src);
	~MateriaSource();

	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP