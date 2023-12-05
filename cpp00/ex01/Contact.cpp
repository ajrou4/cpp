/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:02:34 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 23:18:48 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getfirstname() {
	return first_name;
}
std::string Contact::getlastname() {
	return last_name;
}
std::string Contact::getnickname() {
	return nickname;
}
std::string Contact::getphonenumber() {
	return phone_number;
}
std::string Contact::getdarkestsecret() {
	return darkest_secret;
}

int Contact::setcontact(){

	std::cout << "enter first Name: ";
	getline(std::cin, first_name);
	if (first_name == "") return -1;
	std::cout << "enter last name: ";
	getline(std::cin, last_name);
	if (last_name == "") return -1;
	std::cout << "enter nickname: ";
	getline(std::cin, nickname);
	if (last_name == "") return -1;
	std::cout << "enter phone number: ";
	getline(std::cin, phone_number);
	if (last_name == "") return -1;
	std::cout << "enter darkest secret: ";
	getline(std::cin, darkest_secret);
	if (last_name == "") return -1;
	return 0;
}

void Contact::displayContactInfo() {
	std::cout << "First Name: " << getfirstname() << std::endl;
	std::cout << "Last Name: " << getlastname() << std::endl;
	std::cout << "Nickname: " << getnickname() << std::endl;
	std::cout << "Phone Number: " << getphonenumber() << std::endl;
	std::cout << "Darkest Secret: " << getdarkestsecret() << std::endl;
}

