/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:56:38 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:25:38 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	randomChump( std::string name )
{
	// Create a new Zombie on the stack
	Zombie StackZombie(name); 
	// Announce the Zombie (same scope)
	StackZombie.announce();
}
