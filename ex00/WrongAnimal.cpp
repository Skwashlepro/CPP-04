/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:36:00 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 18:37:32 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal") {}

WrongAnimal::WrongAnimal(std::string type) : type(type) {}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
