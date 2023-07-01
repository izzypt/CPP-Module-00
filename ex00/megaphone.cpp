/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:15:34 by simao             #+#    #+#             */
/*   Updated: 2023/07/01 19:43:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	while (argv[i] && i < argc)
	{
		for (int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout << (char)toupper(argv[i][j]);
		i++;
	}
	std::cout << std::endl;
}
