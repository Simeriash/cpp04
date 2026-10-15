/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:39:29 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 17:05:54 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(void) : _type("Animal")
{
	std::cout << GREEN "Animal was created." RESET << std::endl;
	return;
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy;

	std::cout << GREEN "Animal copy was created." RESET << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << RED "Animal was destructed." RESET << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &other)
{
	if(this != &other)
		_type = other._type;

	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << B_CYAN << _type << " make some noise." RESET << std::endl;
	return;
}

std::string Animal::getType(void) const
{
	return (_type);
}
