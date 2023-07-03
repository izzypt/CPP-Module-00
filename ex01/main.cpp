/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:04:04 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 14:06:22 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string command;
    std::string search_num;
    PhoneBook   book;

    std::cout << "PHONEBOOK: ADD OR SEARCH CONTACTS" << std::endl;
    while(1)
    {
        std::cout << "> ";
        std::cin >> command;
        if (!command.compare("ADD"))
            book.add_contact();
        else if (!command.compare("SEARCH"))
        {
            std::cout << "Provide contact index: " << std::endl;
            std::cin >> search_num; 
            book.search(atoi((const char *)&search_num));
        }
        else if (!command.compare("EXIT"))
            std::cout << "Exit to ?" << std::endl;
        else
            std::cout << "Please pick one of the valid commands." << std::endl;
        std::cin.clear();
    }

    return (0);
}