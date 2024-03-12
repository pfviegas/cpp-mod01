/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:37:48 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../include/My_sed.hpp"

int main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments: \nSintax: ./my_sed <filename> <string1> <sstring2>" << std::endl;
		return (1);
	}

	std::string src_file = argv[1];
	std::string dest_file = src_file + ".replace";
	std::string string1 = argv[2];
	std::string string2 = argv[3];

	if (string1.length() == 0)
	{
		std::cerr << "Error: " << "<string1> can't be an empty word" << std::endl;
		return (2);
	}

	return (my_sed(src_file, dest_file, string1, string2));
}

/**
 * TESTS
 * 
 *  * INVALID ARGUMENTS *
 * ./sed source ola
 * ./sed source
 * ./sed
 * ./sed source ola adeus more
 * ./sed filenotfound ola adeus
 * ./sed filewithoutpermissions ola adeus
 * 
 * * MUST WORK *
 * ./sed source ola adeus
 * ./sed source "this is" "THIS IS"
 * ./sed source ola ola
 * ./sed source ola ""
 * ./sed source " " ""
 * ./sed source "  " ""
 * ./sed source wordnotfound "NO"
 * 
 * * REPLACING NOTHING (s1) CANT GET STUCK IN INFINITE LOOP *
 * ./sed source "" ""
 * ./sed source "" ola
 * 
*/
