/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:29:42 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:36:53 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../include/Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB( void );

		void attack( void )const;
		void setWeapon(Weapon& weapon);

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
