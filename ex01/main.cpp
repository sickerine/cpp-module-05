/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:53 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 09:36:49 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bruh("bruh", 2);
	Form retarded("retarded", 150, 1);
	Form stupid("stupid", 50, 1);
	Form smart("smart", 1, 1);

	std::cout << bruh << retarded << stupid << smart;

	bruh.signForm(retarded);
	bruh.signForm(stupid);
	bruh.signForm(smart);

	std::cout << bruh << retarded << stupid << smart;
	try
	{
		Form idk("idk", 0, 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}