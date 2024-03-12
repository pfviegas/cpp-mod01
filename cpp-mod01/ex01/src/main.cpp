/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:27:03 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main( void )
{
	int num = 5;
	Zombie* horde = zombieHorde(num, "pviegas");;
	
	for (int i = 0; i < num; i++)
	{
		horde[i].announce();
	}

	delete [] horde;
	
	return (0);
}