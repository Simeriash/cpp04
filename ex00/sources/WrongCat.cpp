/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:08:56 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 09:22:37 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "Wrong Cat";

	std::cout << GREEN "Wrong Cat was created." RESET << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &cpy) : WrongAnimal(cpy)
{
	std::cout << GREEN "Wrong Cat copy was created." RESET << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << RED "Wrong Cat was destroyed." RESET << std::endl;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	WrongAnimal::operator=(other);
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << B_MAGENTA "Graaaouu." RESET << std::endl;
	return;
}
