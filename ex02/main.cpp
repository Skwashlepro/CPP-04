/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:13:53 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 19:52:51 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* anim[10];
	for (int i = 0; i < 5; i++){
		anim[i] = new Dog();
	}
	for (int i = 5; i < 10; i++){
		anim[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		delete anim[i];
}
