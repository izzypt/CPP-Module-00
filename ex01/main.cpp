/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:04:04 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 21:04:20 by simao            ###   ########.fr       */
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
            book.display_contacts();
            std::cout << "Provide contact index for more information: " << std::endl;
            std::cin >> search_num; 
            book.search(search_num);
        }
        else if (!command.compare("EXIT"))
            break;
        else
            std::cout << "Please pick one of the valid commands." << std::endl;
        std::cin.clear();
    }

    return (0);
}