/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:52:20 by simao             #+#    #+#             */
/*   Updated: 2023/07/03 13:53:33 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>

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
		Contact contacts[8];
};

#endif