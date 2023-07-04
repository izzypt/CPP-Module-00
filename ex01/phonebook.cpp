/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:08:51 by simao             #+#    #+#             */
/*   Updated: 2023/07/04 13:47:56 by simao            ###   ########.fr       */
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

    if (PhoneBook::current_contact_count >= PhoneBook::max_contact_count)
        PhoneBook::current_contact_count = PhoneBook::max_contact_count - 1;
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

void PhoneBook::search(std::string index)
{
    int i;

    for (int j = 0; j < index.length(); j++) {
        if (!std::isdigit(index[j]))
        {
            std::cout << RED << "Invalid index" << ORIGINAL << std::endl;
            return;   
        }
    };
    i = std::stoi(index);
    if (i > PhoneBook::max_contact_count || i < 0){
        std::cout << "Please provide a valid search index between 0 and 7." << std::endl;
        return;
    }
    else {
        std::cout << " First Name: " << PhoneBook::contacts[i].first_name << std::endl;
        std::cout << " Last Name: " << PhoneBook::contacts[i].last_name << std::endl;
        std::cout << " Number: " << PhoneBook::contacts[i].phone_number << std::endl;
        std::cout << " Nickname: " << PhoneBook::contacts[i].nickname << std::endl;
        std::cout << " Darkest Secret: " << PhoneBook::contacts[i].darkest_secret << std::endl;
    }
}

void PhoneBook::display_contacts(void)
{
    int i = 0;
    std::cout << GREEN << "---------------------------------------------" << std::endl;
    std::cout << "| Index    | Name     | Last Name| Nickname |" << std::endl;
    while (i < PhoneBook::max_contact_count)
    {
        std::cout << "|"<< std::setw(10) << i;
        std::cout << "|"<< std::setw(10) << truncate(PhoneBook::contacts[i].first_name);
        std::cout << "|"<< std::setw(10) << truncate(PhoneBook::contacts[i].last_name);
        std::cout << "|"<< std::setw(10) << truncate(PhoneBook::contacts[i].nickname) <<  "|" << std::endl;
        i++;
    }
    std::cout << "---------------------------------------------" << ORIGINAL << std::endl;
}