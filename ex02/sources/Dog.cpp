/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:17:22 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 12:20:58 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal()
{
	_type = "Dog";
	_brain = new Brain();

	std::cout << GREEN "Dog was created." RESET << std::endl;
	return;
}

Dog::Dog(Dog const &cpy) : AAnimal(cpy)
{
	_brain = new Brain(*cpy._brain);
	std::cout << GREEN "Dog copy was created." RESET << std::endl;
	return;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << RED "Dog was destroyed." RESET << std::endl;
	return;
}

Dog &Dog::operator=(Dog const &other)
{
	if(this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << B_YELLOW "Wouaaff." RESET << std::endl;
	return;
}
