/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:08:37 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 09:39:07 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
}

Form::Form(std::string name, int sign, int exec) : name(name), sign(sign), exec(exec), is_signed(false)
{
    if (sign <= 0 || exec <= 0)
        throw GradeTooHighException();
    else if (sign > 150 || exec > 150)
        throw GradeTooLowException();
}

Form::Form() : sign(0), exec(0), is_signed(false)
{
    throw GradeTooHighException();
}


Form::Form(const Form & copy) : name(copy.getName()), sign(copy.getSign()), exec(copy.getExec())
{
    *this = copy;
}

Form & Form::operator=(const Form & copy)
{
    is_signed = copy.getSigned();
    return *this;
}

const std::string & Form::getName() const
{
    return name;
}

const int & Form::getSign() const {
    return sign;
}

const int & Form::getExec() const {
    return exec;
}

bool Form::getSigned() const {
    return is_signed;
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() <= sign)
        is_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream & stream, const Form & obj)
{
    stream << obj.getName() << ", form sign " << obj.getSign() << ", form signed state " << obj.getSigned() << "." << std::endl;
    return stream;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}