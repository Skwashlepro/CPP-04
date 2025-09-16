/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:12:14 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 19:35:08 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog born !" << std::endl;
	_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog ded.." << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}
