/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:52:04 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 10:45:32 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << GREEN "Brain was created." RESET << std::endl;
	return;
}

Brain::Brain(Brain const &cpy)
{
	*this = cpy;
	std::cout << GREEN "Brain copy was created." RESET << std::endl;
	return;
}

Brain::~Brain(void)
{
	std::cout << RED "Brain was destroyed." RESET << std::endl;
	return;
}

Brain &Brain::operator=(Brain const &other)
{
	if(this != &other)
		for(int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return (*this);
}
