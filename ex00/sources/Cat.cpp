/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:52:24 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 17:25:19 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	_type = "Cat";

	std::cout << GREEN "Cat was created." RESET << std::endl;
	return;
}

Cat::Cat(Cat const &cpy) : Animal(cpy)
{
	std::cout << GREEN "Cat copy was created." RESET << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << RED "Cat was destroyed." RESET << std::endl;
	return;
}

Cat &Cat::operator=(Cat const &other)
{
	Animal::operator=(other);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << B_MAGENTA "Miaaaouu." RESET << std::endl;
}
