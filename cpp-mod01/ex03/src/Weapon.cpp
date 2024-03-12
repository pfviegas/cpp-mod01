/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:35:13 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

// Default Constructor
Weapon::Weapon( void ): _type("unkown")
{
	std::cout << "Weapon " << this->_type << " created" << std::endl;
}

// Parameterized Constructor
Weapon::Weapon( std::string type ): _type(type)
{
	std::cout << "Weapon " << this->_type << " created" << std::endl;
}

// Destructor
Weapon::~Weapon( void )
{
	std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
}

// Getter
std::string const& Weapon::getType()
{
	return (this->_type);
}
// Setter
void Weapon::setType( std::string type)
{
	this->_type = type;
}
