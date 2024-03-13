/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 12:07:28 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

std::string	toUpperCase( const std::string& str )
{
	std::string result = str;
	for (std::size_t i = 0; i < result.length(); i++)
	{
		result[i] = std::toupper(result[i]);
	}
	return result;
}

int	main(int argc, char **argv)
{
	Harl	obj;

	if (argc == 2)
	{
		if ((toUpperCase(argv[1]) == "DEBUG") || toUpperCase(argv[1]) == "INFO" || toUpperCase(argv[1]) == "WARNING" || toUpperCase(argv[1]) == "ERROR")
			obj.complain(toUpperCase(argv[1]));
		else
			std::cout << "Error:\n" << argv[1] << " invalid" << std::endl;
	}
	else
		std::cout << "Error:\nInvalid number of arguments" << std::endl;
}
