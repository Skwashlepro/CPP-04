/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:36:00 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 19:35:36 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal") {
	std::cout << "WrongAnimal born" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal born with type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal ded .." << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong animal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
