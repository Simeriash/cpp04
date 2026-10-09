/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:17:22 by julauren          #+#    #+#             */
/*   Updated: 2026/10/09 17:30:34 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	_type = "Dog";

	std::cout << GREEN "Dog was created." RESET << std::endl;
	return;
}

Dog::Dog(Dog const &cpy) : Animal(cpy)
{
	std::cout << GREEN "Dog copy was created." RESET << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << RED "Dog was destroyed." RESET << std::endl;
	return;
}

Dog &Dog::operator=(Dog const &other)
{
	Animal::operator=(other);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << B_YELLOW "Wouaaff." RESET << std::endl;
	return;
}
