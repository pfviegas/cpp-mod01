/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 11:57:25 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"
/*
int main(void)
{
	{
		Weapon gun = Weapon("Automatic Pistol");
		HumanA paulo("Paulo", gun);
		
		paulo.attack();
		gun.setType("Machine Gun");
		paulo.attack();
	}
	std::cout << std::endl;
	{
		Weapon knife = Weapon("Katana");
		Weapon gun = Weapon("Pistol");
		HumanB viegas("Viegas");
		viegas.attack();
		viegas.setWeapon(&gun);
		viegas.attack();
		gun.setType("Machine Gun");
		viegas.attack();
		viegas.setWeapon(&knife);
		viegas.attack();
	}
	return (0);
}
*/

int main()
{
	// Human A scope - Reference
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	// Human B scope - Pointer
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	return (0);
}