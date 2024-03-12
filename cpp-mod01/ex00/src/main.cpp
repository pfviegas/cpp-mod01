/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:25:14 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main( void )
{
	// Zombie on the Heap
	Zombie*	heap;
	heap = newZombie("Heap");
	heap->announce();

	// Zombie on the Stack
	randomChump("Stack");

	delete heap;
	return 0;
}