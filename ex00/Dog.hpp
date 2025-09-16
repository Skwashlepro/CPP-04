/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:01:37 by luctan            #+#    #+#             */
/*   Updated: 2025/09/16 20:17:14 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog& operator=(const Dog& other);
		void	makeSound() const;

};

#endif
