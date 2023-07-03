/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:23:33 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 18:11:43 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Contact::Contact(void)
{
    //std::cout << "Contact constructor called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    //std::cout << "Contact deconstructor called" << std::endl;
    return;
}

std::string Contact::get_first_name(void)
{
    return this->first_name;
}

std::string Contact::get_last_name(void)
{
    return this->last_name;
}

std::string Contact::get_phone_number(void)
{
    return this->phone_number;
}

void Contact::set_first_name(std::string name)
{
    this->first_name = name;
}

void Contact::set_last_name(std::string name)
{
    this->last_name = name;
}

void Contact::set_phone_number(std::string number)
{
	this->phone_number = number;
}