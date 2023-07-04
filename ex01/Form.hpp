/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:55:12 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 09:37:15 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name; 
        const int sign;
        const int exec;
        bool is_signed;
    public:
        Form();
        ~Form();
        Form(const Form & copy);
        Form & operator=(const Form & copy); 

        Form(std::string name, int sign, int exec);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };

        const std::string & getName() const;
        const int & getSign() const;
        const int & getExec() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat & bureaucrat);
};

std::ostream &operator<<(std::ostream & stream, const Form & obj);