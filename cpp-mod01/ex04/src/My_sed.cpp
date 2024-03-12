/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:08 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 19:50:02 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

#include "../include/My_sed.hpp"

int	my_sed( std::string src_file, std::string dest_file, std::string target, std::string replaceable )
{
	std::string		line;
	size_t			target_pos;

	// open the source file
	std::ifstream	ifs(src_file.c_str());
	if (ifs.fail())
	{
		std::cerr << "Ocurred an Error: " << strerror(errno) << std::endl;
		return errno;
	}
	
	// open the output file
	std::ofstream	ofs(dest_file.c_str());
	if (ofs.fail())
	{
		ifs.close();
		std::cerr << "Ocurred an Error: " << strerror(errno) << std::endl;
		return errno;
	}

	// read the file line by line
	while(getline(ifs, line))
	{
		// replace the target string with the replaceable string
		while ((target_pos = line.find(target)) != std::string::npos && target != replaceable)
		{
			line.erase(target_pos, target.length());
			line.insert(target_pos, replaceable);
		}
		// write the line to the output file
		ofs << line;

		// only add newline if the ifstream does not have eof
		// otherwise an extra newline at the end of the file may be added
		if (!ifs.eof())
			 ofs << std::endl;
	}

	ifs.close();
	ofs.close();

	return (0);
}
