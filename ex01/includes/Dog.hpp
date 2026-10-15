/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:36:07 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 08:34:36 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_YELLOW "\033[93m"
#define RESET "\033[39m"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &cpy);
		~Dog(void);
		Dog &operator=(Dog const &other);

		void makeSound(void) const;
};

#endif
