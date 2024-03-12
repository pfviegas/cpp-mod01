/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:56:38 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:35:27 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

// Constructor
HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
	std::cout << this->_name << " without weapon created" << std::endl;
}

// Destructor
HumanB::~HumanB( void )
{
	if (this->_weapon)
		std::cout << this->_name << " with " << this->_weapon->getType() << " weapon was destroyed" << std::endl;
	else
		std::cout << this->_name << " without weapon was destroyed" << std::endl;
}

// Member function
void HumanB::attack( void )const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType()<< std::endl;
	else
		std::cout << this->_name << " attacks with their " << "BARE HANDS" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}