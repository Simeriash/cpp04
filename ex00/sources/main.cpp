/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:32:59 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 09:27:10 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

#include <iostream>

int main(void)
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		dog->makeSound();
		cat->makeSound();
		meta->makeSound();

		delete meta;
		delete dog;
		delete cat;
	}
	{
		const WrongAnimal *wrongCat = new WrongCat();

		std::cout << wrongCat->getType() << std::endl;
		wrongCat->makeSound();

		delete wrongCat;
	}
	return (0);
}
