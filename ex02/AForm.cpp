/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:08:37 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/16 10:33:44 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm()
{
}

AForm::AForm(std::string name, int sign, int exec) : name(name), sign(sign), exec(exec), is_signed(false)
{
    if (sign <= 0 || exec <= 0)
        throw GradeTooHighException();
    else if (sign > 150 || exec > 150)
        throw GradeTooLowException();
}

AForm::AForm() : sign(0), exec(0), is_signed(false)
{
    throw GradeTooHighException();
}


AForm::AForm(const AForm & copy) : name(copy.getName()), sign(copy.getSign()), exec(copy.getExec())
{
    *this = copy;
}

AForm & AForm::operator=(const AForm & copy)
{
    is_signed = copy.getSigned();
    return *this;
}

const std::string & AForm::getName() const
{
    return name;
}

const int & AForm::getSign() const {
    return sign;
}

const int & AForm::getExec() const {
    return exec;
}

bool AForm::getSigned() const {
    return is_signed;
}

void AForm::beSigned(const Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() <= sign)
        is_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream & stream, const AForm & obj)
{
    stream << obj.getName() << ", form sign " << obj.getSign() << ", form signed state " << obj.getSigned() << "." << std::endl;
    return stream;
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char * AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}

const char * AForm::ExecuteException::what() const throw()
{
    return "Execute error";
}

void AForm::checkExecution(const Bureaucrat & executor) const
{
    if (executor.getGrade() > exec)
        throw GradeTooLowException();
    else if (!is_signed)
        throw FormNotSignedException();
}

