/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:37:57 by mcharrad          #+#    #+#             */
/*   Updated: 2023/06/21 11:09:49 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

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
        class GradeTooHighException : public std::exception {};
        class GradeTooLowException : public std::exception {};
        const std::string &getName() const;
        int getGrade() const ;
        void increment();
        void decrement();
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj);