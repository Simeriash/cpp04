/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:17:28 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 12:24:08 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[39m"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &cpy);
		virtual ~AAnimal(void);
		AAnimal &operator=(AAnimal const &other);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;

	protected:
		std::string _type;
};

#endif
