/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:36:30 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 19:36:58 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat born !" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat ded .." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "meowrong!" << std::endl;
}
