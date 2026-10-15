/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:04:00 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 09:08:37 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../includes/WrongAnimal.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define B_MAGENTA "\033[95m"
#define RESET "\033[39m"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &cpy);
		~WrongCat(void);
		WrongCat &operator=(WrongCat const &other);

		void makeSound(void) const;
};

#endif
