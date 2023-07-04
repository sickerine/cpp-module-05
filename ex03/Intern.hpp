/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:26:20 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:27:03 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        AForm *makeForm(std::string name, std::string target);
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};