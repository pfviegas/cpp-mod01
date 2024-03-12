/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:29:42 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:37:09 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../include/Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon& weaponType );
		~HumanA( void );

		void attack( void)const;

	private:
		std:: string	_name;
		Weapon&			_weapon;
};

#endif 
