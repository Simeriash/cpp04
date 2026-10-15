/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:39:29 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 12:24:58 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include <iostream>
#include <string>

AAnimal::AAnimal(void) : _type("Animal")
{
	std::cout << GREEN "Animal was created." RESET << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &cpy)
{
	*this = cpy;

	std::cout << GREEN "Animal copy was created." RESET << std::endl;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << RED "Animal was destructed." RESET << std::endl;
	return;
}

AAnimal &AAnimal::operator=(AAnimal const &other)
{
	if(this != &other)
		_type = other._type;

	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (_type);
}
