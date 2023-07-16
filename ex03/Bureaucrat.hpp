/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:37:57 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/16 11:25:38 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>

class AForm;

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat & operator=(const Bureaucrat & copy);
        Bureaucrat(const Bureaucrat & copy);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        const std::string &getName() const;
        int getGrade() const ;
        void increment();
        void decrement();
        void signForm(AForm & form) const;
        void executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj);