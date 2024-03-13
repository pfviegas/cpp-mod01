/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:29:42 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 11:54:54 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class	Zombie
{
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	SetName(std::string name);
		void	announce(void);

	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
