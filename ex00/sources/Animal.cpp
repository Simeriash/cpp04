/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:39:29 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 16:50:51 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(void)
{
	return;
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy;
	return;
}

Animal::~Animal(void)
{
	return;
}

Animal &Animal::operator=(Animal const &other)
{
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
