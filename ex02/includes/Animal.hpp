/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:17:28 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 17:41:08 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_CYAN "\033[96m"
#define RESET "\033[39m"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &cpy);
		virtual ~Animal(void);
		Animal &operator=(Animal const &other);

		virtual void makeSound(void) const;
		std::string getType(void) const;

	protected:
		std::string _type;
};

#endif
