/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 11:54:41 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "../include/Zombie.hpp"

int main( void )
{
	int num_zombie = 0;

	do
	{
		system("clear");
		std::cout << "Introduz o numero de Zombies: ";
		std::cin >> num_zombie;

		if (std::cin.fail() || num_zombie <= 0)
		{
			std::cin.clear();  // Limpa o estado de erro
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descarta entrada inválida
			std::cout << "Entrada inválida. Por favor, digite um inteiro positivo.\n";
		}
	} while (num_zombie <= 0);	

	Zombie* horde = zombieHorde(num_zombie, "pviegas");;

	for (int i = 0; i < num_zombie; i++)
	{
		horde[i].announce();
	}

	delete [] horde;
	
	return 0;
}