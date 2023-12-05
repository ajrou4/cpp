/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:11 by majrou            #+#    #+#             */
/*   Updated: 2023/11/20 01:08:27 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include <iomanip>


PhoneBook::PhoneBook() {
	index = 0;
}
PhoneBook::~PhoneBook() {

}



void PhoneBook::displayContact() {
	std::cout << "| " << std::setw(10) << std::left << "Index"
		<< " | " << std::setw(10) << std::left << "First Name"
		<< " | " << std::setw(10) << std::left << "Last Name"
		<< " | " << std::setw(10) << std::left << "Nickname"
		<< " | " << std::setw(10) <<std::left << "darkest secret"
		<< " |" << std::endl;
	for (int i = 0; i < index; i++) {
		Contact contact = contacts[i];
		std::cout << "| " << std::setw(10) << std::left << i
			<< " | " << std::setw(10) << std::left << contact.getfirstname()
			<< " | " << std::setw(10) << std::left << contact.getlastname()
			<< " | " << std::setw(10) << std::left << contact.getnickname()
			<< " | " << std::setw(10) << std::left << contact.getdarkestsecret()
			<< " |" << std::endl;
	}
}

int	ft_atoi(std::string str)
{

	int		sign;
	int		result;
	int		i;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}




void PhoneBook::searchContact() {
	std::cout << std::endl << "|Index|First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|-----|----------|----------|----------|" << std::endl;

	for (int i = 0; i < index && i < 8; i++) {
		std::cout << "|";
		std::cout.width(5);
		std::cout <<i << "|";

		if (contacts[i].getfirstname().length() > 10) {
			std::cout << contacts[i].getfirstname().substr(0, 9) << ".";
		} else {
			std::cout.width(10);
			std::cout << contacts[i].getfirstname();
		}

		std::cout.width(10);
		std::cout<< contacts[i].getlastname().substr(0, 9) << ".";

		if (contacts[i].getnickname().length() > 9) {
			std::cout.width(10);
			std::cout << contacts[i].getnickname().substr(0, 9) << ".";
		} else {
			std::cout.width(10);
			std::cout << contacts[i].getnickname();
		}

		std::cout << std::endl;
	}
	std::cout << std::endl;
	if (index > 0) {
		std::string contactIndex;
		std::cout << "Enter contact index to display: ";
		std::cin >> contactIndex;

		int i = ft_atoi(contactIndex);
		if (i >= 0 && i < index) {
			contacts[i].displayContactInfo();
		} else {
			std::cout << "Invalid input" << std::endl;
		}
	} else {
		std::cout << "No contacts available." << std::endl;
	}
}

