/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:12:14 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 20:14:31 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog born !" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog::~Dog(){
	std::cout << "Dog ded.." << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	std::cout << "Dog assignment operator = called" << std::endl;
	if (this == &other)
		return *this;
	if (this->_brain)
		delete _brain;
	this->_brain = new Brain(*other._brain);
	return *this;
}
