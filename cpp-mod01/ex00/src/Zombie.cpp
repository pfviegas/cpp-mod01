/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 11:31:00 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// Default Constructor
Zombie::Zombie( void )
{
	this->SetName("no name");
	std::cout << this->_name << ": constructor called" << std::endl;
}

// Parameterized Constructor
Zombie::Zombie(std::string name)
{
	this->SetName( name );
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
	this->_name = name;
}
