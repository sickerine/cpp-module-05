/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:53 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:21:23 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	int arr[4] = {0, 1, 150, 151};
	std::string prints[4] = {
		"GradeTooHighException",
		"Success",
		"Fail",
		"GradeTooLowException"};

	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "Test " << i << ": " << prints[i] << std::endl;
			std::cout << "---------------------" << std::endl;
			try
			{
				Bureaucrat bruh("bruh", arr[i]);
				ShrubberyCreationForm retarded("retarded");

				std::cout << bruh << retarded;

				bruh.signForm(retarded);

				std::cout << bruh << retarded;

				bruh.executeForm(retarded);

				std::cout << bruh << retarded;
				std::cout << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "Test " << i << ": " << prints[i] << std::endl;
			std::cout << "---------------------" << std::endl;
			try
			{
				Bureaucrat bruh("robotomy", arr[i]);
				RobotomyRequestForm retarded("asdasdnas");

				std::cout << bruh << retarded;

				bruh.signForm(retarded);

				std::cout << bruh << retarded;

				bruh.executeForm(retarded);

				std::cout << bruh << retarded;
				std::cout << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "Test " << i << ": " << prints[i] << std::endl;
			std::cout << "---------------------" << std::endl;
			try
			{
				Bureaucrat bruh("presinettedd", arr[i]);
				PresidentialPardonForm retarded("fsgasfasfafadsfadsfdsfasfas");

				std::cout << bruh << retarded;

				bruh.signForm(retarded);

				std::cout << bruh << retarded;

				bruh.executeForm(retarded);

				std::cout << bruh << retarded;
				std::cout << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
}