/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:07:31 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 19:35:11 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat born !" << std::endl;
	_brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat ded.." << std::endl;
	delete _brain;
}

void	Cat::makeSound() const {
	std::cout << "meow" << std::endl;
}
