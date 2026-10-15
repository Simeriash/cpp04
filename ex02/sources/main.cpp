/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:32:59 by julauren          #+#    #+#             */
/*   Updated: 2026/10/15 12:23:43 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#include <iostream>

int main(void)
{
	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();
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

	return (0);
}
