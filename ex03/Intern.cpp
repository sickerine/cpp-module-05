/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:27:06 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:52:43 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	AForm *f;
	form == "robotomy request"			? f = new RobotomyRequestForm(target):
	form == "presidential pardon"		? f = new PresidentialPardonForm(target):
	form == "shrubbery creation"		? f = new ShrubberyCreationForm(target):
	f = 0;
	std::cout << (f ? "Intern creates " : "Intern could not create ") << form << std::endl;
	return f;
}