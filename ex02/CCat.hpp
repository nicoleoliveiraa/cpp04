/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CCat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:14 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/10/21 11:11:59 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CCAT_HPP
#define CCAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#define RESET   "\033[0m"
#define BOLD_GREEN   "\033[1m\033[32m"
#define BOLD_YELLOW  "\033[1m\033[33m"
#define BOLD_WHITE   "\033[1m\033[37m"
#define WHITE   "\033[37m"
#define YELLOW  "\033[33m"
#define BOLD_CYAN        "\033[1m\033[36m"
#define CYAN        "\033[36m"

class CCat : public AAnimal {
private:
	Brain* brain;
public:
	CCat();
	CCat(const CCat& src);
	CCat& operator=(const CCat& src);
	~CCat();

	void makeSound() const;
};

#endif // CCAT_HPP