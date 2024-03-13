/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:29:42 by paulo             #+#    #+#             */
/*   Updated: 2024/03/13 12:07:26 by pviegas          ###   ########.fr       */
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
