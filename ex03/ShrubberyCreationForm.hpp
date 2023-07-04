/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:41:13 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:00:37 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm(std::string target);
    void beExecuted() const;
};