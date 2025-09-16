/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:05:24 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 18:20:19 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("blob"){}

Animal::Animal(std::string type) : type(type) {}

Animal::~Animal(){}

void	Animal::makeSound() const {
	std::cout << "bweurg" << std::endl;
}

std::string Animal::getType() const {
	return type;
}
