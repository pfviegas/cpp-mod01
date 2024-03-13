/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 11:54:24 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// Default Constructor
Zombie::Zombie( void ): _name("no name")
{
	std::cout << this->_name << ": constructor called" << std::endl;
}

// Parameterized Constructor
Zombie::Zombie( std::string name ): _name(name)
{
	std::cout << this->_name << ": constructor called" << std::endl;
}

// Destructor
Zombie::~Zombie( void )
{
	std::cout << this->_name << ": destructer called" << std::endl;
}

// Member Functions
void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Setter
void Zombie::SetName( std::string name )
{
	std::cout << "zombie " << this->_name << "'s name updated to " << name << std::endl;
	this->_name = name;
}
