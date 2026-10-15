/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:52:24 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 11:04:21 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	_brain = new Brain();

	std::cout << GREEN "Cat was created." RESET << std::endl;
	return;
}

Cat::Cat(Cat const &cpy) : Animal(cpy)
{
	_brain = new Brain(*cpy._brain);
	std::cout << GREEN "Cat copy was created." RESET << std::endl;
	return;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << RED "Cat was destroyed." RESET << std::endl;
	return;
}

Cat &Cat::operator=(Cat const &other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << B_MAGENTA "Miaaaouu." RESET << std::endl;
	return;
}
