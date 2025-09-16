/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:05:24 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 20:20:22 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("blob"){
	std::cout << "Animal born!!" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal born with type: " << type << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal dead" << std::endl;
}

void	Animal::makeSound() const {
}

std::string Animal::getType() const {
	return type;
}
