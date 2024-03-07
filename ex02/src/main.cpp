/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:27:00 by paulo             #+#    #+#             */
/*   Updated: 2024/03/07 17:53:06 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	
	std::string text = "Hi THIS IS BRAIN";
	std::string* stringPTR = &text; // pointer of variable text
	std::string &stringREF = text; // Reference of variable text
	
	std::cout << "\nMemory Address:" << std::endl;
	std::cout << "\ttext :\t\t" << &text << std::endl;
	std::cout << "\tstringPTR :\t" << &stringPTR << std::endl;
	std::cout << "\tstringREF :\t" << &stringREF << std::endl;
	std::cout << "\nValue:" << std::endl;
	std::cout << "\ttext :\t\t" << text << std::endl;
	std::cout << "\tstringPTR :\t" << *stringPTR << std::endl;
	std::cout << "\tstringREF :\t" << stringREF << std::endl;
	return 0;
	
}