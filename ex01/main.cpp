/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:04:04 by simao             #+#    #+#             */
/*   Updated: 2023/07/02 20:11:04 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string name;

    while(1)
    {
        std::cin >> name;
        if (!name.compare("ADD"))
            std::cout << "Add who ?" << std::endl;
        else if (!name.compare("SEARCH"))
            std::cout << "Search what?" << std::endl;
        else if (!name.compare("EXIT"))
            std::cout << "Exit to ?" << std::endl;
        else
            std::cout << "Please pick one of the valid commands." << std::endl;
        std::cin.clear();
    }
    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << "Your name is " << name << " ?\n";

    return (0);
}