/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:53 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/21 11:18:36 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bruh("bruh", 150);
	try
	{
		Bureaucrat brudda("brudda", 420);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat zmoumen("zmoumen", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << bruh;
	try{
		bruh.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat me("me", 1);
	try {
		me.increment();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << me;
	me.decrement();
	std::cout << me;
}