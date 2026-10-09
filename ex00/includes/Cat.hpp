/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:33:02 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 17:41:48 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_MAGENTA "\033[95m"
#define RESET "\033[39m"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cpy);
		virtual ~Cat(void);
		Cat &operator=(Cat const &other);

		void makeSound(void) const;
};

#endif
