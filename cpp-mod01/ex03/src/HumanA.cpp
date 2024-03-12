/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:56:38 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:35:45 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

// Constructor
HumanA::HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon) 
{
	std::cout << this->_name << " grabs the weapon " << this->_weapon.getType() << "." << std::endl;
}

// Destructor
HumanA::~HumanA( void )
{
	std::cout << this->_name << " with " << this->_weapon.getType() << " weapon was destroyed" << std::endl;
}

// Member function
void HumanA::attack( void )const
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << "." << std::endl;
}
