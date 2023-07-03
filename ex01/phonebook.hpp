/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:52:20 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 20:31:05 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

/* Libraries */

#include <iostream>
#include <iomanip> //setw
#include <string> //stoi

/* Colors */
# define ORIGINAL		"\e[0m"
# define RED			"\e[0;31m"
# define L_RED			"\e[0;38;5;9m"
# define GREEN			"\e[0;32m"
# define D_GREEN		"\e[0;38;5;22m"

/* Classes */

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_phone_number(void);
		void set_first_name(std::string name);
		void set_last_name(std::string name);
		void set_phone_number(std::string number);
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nickname;
		std::string darkest_secret;
};

class PhoneBook
{
	private:
		int max_contact_count = 8;
		int current_contact_count = 0;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add_contact(void);
		void search(int index);
		void display_contacts(void);
		Contact contacts[8];
};

#endif