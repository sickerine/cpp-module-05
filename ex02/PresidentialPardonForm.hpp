/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:12:41 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/04 10:14:41 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    PresidentialPardonForm(std::string target);
    void beExecuted() const;
};