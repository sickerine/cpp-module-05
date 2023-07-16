/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:27:06 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/16 11:50:21 by mcharrad         ###   ########.fr       */
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

static AForm *makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

static AForm *makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

static AForm *makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	struct s_form
	{
		std::string name;
		AForm *(*f)(std::string);
	} forms[] = {
		{"robotomy request", makeRobotomyRequestForm},
		{"presidential pardon", makePresidentialPardonForm},
		{"shrubbery creation", makeShrubberyCreationForm},
	};

	for (size_t i = 0; i < sizeof(forms) / sizeof(forms[0]) ; i++)
	{
		if (forms[i].name == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return forms[i].f(target);
		}
	}

	std::cout << "Intern could not create " << form << std::endl;
	return 0;
}