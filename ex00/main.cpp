/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:13:53 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 18:38:52 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== CORRECT IMPLEMENTATION (with virtual) ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Type: " << j->getType() << std::endl;
	std::cout << "Type: " << i->getType() << std::endl;
	std::cout << "Type: " << meta->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n=== WRONG IMPLEMENTATION (without virtual) ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Type: " << wrongMeta->getType() << std::endl;
	std::cout << "Type: " << wrongCat->getType() << std::endl;

	std::cout << "\nSounds (notice the problem):" << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();

	std::cout << "\n=== DIRECT OBJECT CALLS (both work correctly) ===" << std::endl;
	Cat directCat;
	WrongCat directWrongCat;

	std::cout << "Direct Cat: ";
	directCat.makeSound();
	std::cout << "Direct WrongCat: ";
	directWrongCat.makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;

	return 0;
}
