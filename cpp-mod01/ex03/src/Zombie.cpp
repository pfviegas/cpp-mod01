/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/07 16:42:42 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// Default Constructor
Zombie::Zombie(void): name("no name")
{
	std::cout << this->name << ": constructor called" << std::endl;
}

// Parameterized Constructor
Zombie::Zombie(std::string name): name(name)
{
	std::cout << this->name << ": constructor called" << std::endl;
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->name << ": destructer called" << std::endl;
}

// Member Functions
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Setter
void Zombie::SetName(std::string name)
{
	std::cout << "zombie " << this->name << "'s name updated to " << name << std::endl;
	this->name = name;
}
