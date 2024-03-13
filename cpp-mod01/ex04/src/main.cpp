/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 12:01:29 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	OK
	==
		./my_sed src_file str1 str2
		./my_sed src_file "str 1" "str 2"
		./my_sed src_file str1 str1
		./my_sed src_file str1 ""
		./my_sed src_file " " ""
		./my_sed src_file "  " ""
		./my_sed src_file word_not_found "Not found"

	Invalid
	=======
		./my_sed
		./my_sed src_file
		./my_sed src_file str1
		./my_sed src_file str1 str2 str3
		./my_sed src_not_found str1 str2
		./my_sed src_without_perm str1 str2
		./my_sed src_file "" ""
		./my_sed src_file "" ola
*/
