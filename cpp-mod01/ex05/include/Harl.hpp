/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:29:42 by paulo             #+#    #+#             */
/*   Updated: 2024/03/12 12:38:52 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
#define _HARL_HPP_

#include <iostream>
#include <cstring>

class Harl
{
	public:
		Harl( void );
		~Harl( void );

		void complain( std::string level );

	private:
		static std::string const _complain[4];
	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void ); 

};

#endif
