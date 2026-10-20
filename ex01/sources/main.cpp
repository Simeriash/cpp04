/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:32:59 by julauren          #+#    #+#             */
/*   Updated: 2026/10/20 15:16:16 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#include <iostream>

int main(void)
{
	{
		Animal *dog = new Dog();
		Animal *cat = new Cat();
		Dog an_other_dog;
		Dog an_other_other_dog = Dog(an_other_dog);

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		std::cout << an_other_dog.getType() << std::endl;
		std::cout << an_other_other_dog.getType() << std::endl;

		dog->makeSound();
		cat->makeSound();
		an_other_dog.makeSound();
		an_other_other_dog.makeSound();

		delete dog;
		delete cat;
	}
	{
		Animal *animal[4];
		animal[0] = new Dog();
		animal[1] = new Dog();
		animal[2] = new Cat();
		animal[3] = new Cat();

		for(int i = 0; i < 4; i++)
			delete animal[i];
	}
	return (0);
}
