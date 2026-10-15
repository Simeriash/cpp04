/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:33:02 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 12:19:27 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_MAGENTA "\033[95m"
#define RESET "\033[39m"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const &cpy);
		~Cat(void);
		Cat &operator=(Cat const &other);

		void makeSound(void) const;

	private:
		Brain *_brain;
};

#endif
