/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:45:35 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:00:02 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getSign(), copy.getExec())
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    target = copy.target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

void ShrubberyCreationForm::beExecuted() const
{
    std::string filename = target + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs)
        throw ExecuteException();
    ofs << "ASCII trees" << std::endl;
    ofs.close();
}
