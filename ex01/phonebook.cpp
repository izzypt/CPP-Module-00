/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:08:51 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 14:04:00 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook constructor called" << std::endl;
    return;
}

void PhoneBook::add_contact()
{
    if (PhoneBook::current_contact_count > PhoneBook::max_contact_count)
        PhoneBook::current_contact_count = PhoneBook::max_contact_count;

    std::cout << "Current contact count: " << PhoneBook::current_contact_count << std::endl;        
    std::cout << "Please provide contact first name: " << std::endl;
    std::cin >> PhoneBook::contacts[current_contact_count].first_name;
    std::cout << "Please provide contact last name: " << std::endl;
    std::cin >> PhoneBook::contacts[current_contact_count].last_name;
    std::cout << "Please provide contact phone number: " << std::endl;
    std::cin >>  PhoneBook::contacts[current_contact_count].phone_number;
    std::cout << "Please provide contact nickname: " << std::endl;
    std::cin >>  PhoneBook::contacts[current_contact_count].nickname;
    std::cout << "Please provide contact darkest secret: " << std::endl;
    std::cin >>  PhoneBook::contacts[current_contact_count].darkest_secret;

    std::cout << "Contact First Name: " << PhoneBook::contacts[current_contact_count].first_name << std::endl;
    std::cout << "Contact Last Name: " << PhoneBook::contacts[current_contact_count].last_name << std::endl;
    std::cout << "Contact Number: " << PhoneBook::contacts[current_contact_count].phone_number << std::endl;
    
    PhoneBook::current_contact_count += 1;
}

void PhoneBook::search(int index)
{
    if (index > PhoneBook::max_contact_count || index < 0){
        std::cout << "Please provide a valid search index between 0 and 7." << std::endl;
        return;
    }
    else {
        std::cout << "| index    | Name     | Lt Name  | Nickname |" << std::endl;
        std::cout << "|"<< std::setw(10) << index;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[index].first_name;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[index].last_name;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[index].nickname <<  "|" << std::endl;
    }
        
}