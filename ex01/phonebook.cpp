/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:08:51 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 20:45:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    //std::cout << "PhoneBook constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    //std::cout << "PhoneBook constructor called" << std::endl;
    return;
}

void PhoneBook::add_contact()
{
    std::string line;

    if (PhoneBook::current_contact_count > PhoneBook::max_contact_count)
        PhoneBook::current_contact_count = PhoneBook::max_contact_count;
    int i = current_contact_count;
         
    std::cout << "Please provide contact first name: " << std::endl;
    std::cin >> PhoneBook::contacts[i].first_name;
    std::cout << "Please provide contact last name: " << std::endl;
    std::cin >> PhoneBook::contacts[i].last_name;
    std::cout << "Please provide contact phone number: " << std::endl;
    std::cin >>  PhoneBook::contacts[i].phone_number;
    std::cout << "Please provide contact nickname: " << std::endl;
    std::cin >>  PhoneBook::contacts[i].nickname;
    std::cout << "Please provide contact darkest secret: " << std::endl;
    std::cin >>  PhoneBook::contacts[i].darkest_secret;

    PhoneBook::current_contact_count += 1;
}

void PhoneBook::search(int index)
{
    if (index > PhoneBook::max_contact_count || index < 0){
        std::cout << "Please provide a valid search index between 0 and 7." << std::endl;
        return;
    }
    else {
        std::cout << " First Name: " << PhoneBook::contacts[index].first_name << std::endl;
        std::cout << " Last Name: " << PhoneBook::contacts[index].last_name << std::endl;
        std::cout << " Number: " << PhoneBook::contacts[index].phone_number << std::endl;
        std::cout << " Nickname: " << PhoneBook::contacts[index].nickname << std::endl;
        std::cout << " Darkest Secret: " << PhoneBook::contacts[index].darkest_secret << std::endl;
    }
}

void PhoneBook::display_contacts(void)
{
    int i = 0;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "| Index    | Name     | Last Name| Nickname |" << std::endl;
    while (i < PhoneBook::max_contact_count)
    {
        std::cout << "|"<< std::setw(10) << i;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[i].first_name;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[i].last_name;
        std::cout << "|"<< std::setw(10) << PhoneBook::contacts[i].nickname <<  "|" << std::endl;
        i++;
    }
    std::cout << "---------------------------------------------" << std::endl;
}