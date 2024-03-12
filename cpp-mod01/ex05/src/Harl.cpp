/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:54:19 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

std::string const Harl::_complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl( void )
{
	// std::cout << "contructer called" << std::endl;
}

Harl::~Harl( void )
{
	// std::cout << "destructer called" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n";
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for";
	std::cout << " years whereas you started working here since last month.\n";
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	void	(Harl::*PtrMemberFuc[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i=0; i < 4; i++)
	{
		if (_complain[i] == level)
			(this->*PtrMemberFuc[i])();
	}
}
