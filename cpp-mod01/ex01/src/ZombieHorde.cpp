/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:56:38 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:32:29 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	ZombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].SetName(name);
	}
	return (horde);
}
