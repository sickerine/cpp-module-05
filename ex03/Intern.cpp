/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:27:06 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/17 08:18:20 by mcharrad         ###   ########.fr       */
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

static AForm *makeNothing(std::string target)
{
	(void)target;
	return 0;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	struct s_form
	{
		std::string print;
		AForm *(*f)(std::string);
	} forms[] = {
		{"Intern could not create ", makeNothing},
		{"Intern creates ", makeRobotomyRequestForm},
		{"Intern creates ", makePresidentialPardonForm},
		{"Intern creates ", makeShrubberyCreationForm},
	};
	int index = (form == "robotomy request") + (form == "presidential pardon") * 2 + (form == "shrubbery creation") * 3;

	std::cout << forms[index].print << form << std::endl;
	return forms[index].f(target);
}