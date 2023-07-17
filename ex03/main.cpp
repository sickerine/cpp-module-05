/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:09:53 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/17 08:16:41 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat bruh("bruh", 1);
	AForm *rrf = idiotOne.makeForm("robotomy request", "Bender");
	AForm *scf = idiotOne.makeForm("shrubbery creation", "Bender");
	AForm *ppf = idiotOne.makeForm("presidential pardon", "Bender");
	AForm *fuck = idiotOne.makeForm("dkasdkajsdaksdjklasdjaklsdjas", "adbadasj");

	bruh.signForm(*rrf);
	bruh.executeForm(*rrf);
	bruh.signForm(*scf);
	bruh.executeForm(*scf);
	bruh.signForm(*ppf);
	bruh.executeForm(*ppf);

	if (!fuck)
		std::cout << "the form existnt" << std::endl;

	delete rrf; 
	delete scf;
	delete ppf;
}