/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:48:06 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 09:32:25 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(void) : _type("Wrong Animal")
{
	std::cout << GREEN "Wrong Animal was created." RESET << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	*this = cpy;

	std::cout << GREEN "Wrong Animal copy was created." RESET << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED "Wrong Animal was destructed." RESET << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if(this != &other)
		_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << B_CYAN << _type << " is crying." RESET << std::endl;
	return;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}
