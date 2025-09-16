/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:07:31 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 20:18:15 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat born !" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat ded.." << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	std::cout << "Cat assignment operator = called" << std::endl;
	if (this == &other)
		return *this;
	Animal::operator=(other);
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "meow" << std::endl;
}
