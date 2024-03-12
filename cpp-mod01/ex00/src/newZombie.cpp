/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:46:49 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:25:23 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	// Create a new Zombie on the heap
	Zombie* zombie = new Zombie;
	zombie->SetName(name);
	return (zombie);
}
