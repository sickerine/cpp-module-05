/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:02:54 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:14:43 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getSign(), copy.getExec())
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    target = copy.target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

void RobotomyRequestForm::beExecuted() const
{
    std::cout << "* Torsional-axial chatter vibrations *" << std::endl;
    if (rand() > RAND_MAX / 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " robotomization failed" << std::endl;   
}