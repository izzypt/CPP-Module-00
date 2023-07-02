/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:52:20 by simao             #+#    #+#             */
/*   Updated: 2023/07/02 19:56:40 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string phone_number;
    public:
        Contact(void);
        ~Contact(void);
};

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
};

Contact::Contact(void)
{
    std::cout << "Contact constructor called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "Contact deconstructor called" << std::endl;
    return;
}

#endif