/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 14:13:39 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

#include "../include/My_sed.hpp"

int	my_sed(std::string src_file, std::string dest_file, std::string target, std::string replaceable)
{
	std::string		line;
	size_t			target_pos;

	std::ifstream	ifs(src_file.c_str());
	if (ifs.fail())
	{
		std::cerr << "Ocurred an Error: " << strerror(errno) << std::endl;
		return errno;
	}
	
	std::ofstream	ofs(dest_file.c_str());
	if (ofs.fail())
	{
		ifs.close();
		std::cerr << "Ocurred an Error: " << strerror(errno) << std::endl;
		return errno;
	}

	// reading with getline to keep spaces
	while(getline(ifs, line))
	{
		// find every occurrence of the word and replace it if target diferent from replaceable
		while ((target_pos = line.find(target)) != std::string::npos && target != replaceable)
		{
			line.erase(target_pos, target.length());
			line.insert(target_pos, replaceable);
		}

		ofs << line;

		// only add newline if the ifstream does not have eof
		if (!ifs.eof())
			 ofs << std::endl;
	}

	ifs.close();
	ofs.close();

	return 0;
}
