/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:50:31 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/22 11:26:28 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : name(name), grade(grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade <= 0)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName())
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    grade = copy.getGrade();
    return *this;
}

const std::string &Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment()
{
    if (grade - 1 <= 0)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrement()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj)
{
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl; 
    return stream;
}

void Bureaucrat::signForm(Form & form) const {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
