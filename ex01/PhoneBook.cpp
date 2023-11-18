/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:11 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 01:08:29 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include <iomanip>


PhoneBook::PhoneBook() {
		std::cout << "Constructor called" << std::endl;
	index = 0;
}
PhoneBook::~PhoneBook() {
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::addContact(const Contact& con) {
	if (index < 8) {
		contacts[index] = con;
		index++;
	} else {
		std::cout << "Cannot add more contacts." << std::endl;
	}
}

void PhoneBook::displayContact() {
	std::cout << "| " << std::setw(10) << std::left << "Index"
		<< " | " << std::setw(15) << std::left << "First Name"
		<< " | " << std::setw(15) << std::left << "Last Name"
		<< " | " << std::setw(15) << std::left << "Nickname"
		<< " | " << std::setw(20) <<std::left << "darkest secret"
		<< " |" << std::endl;
	for (int i = 0; i < index; i++) {
		Contact contact = contacts[i];
		std::cout << "| " << std::setw(10) << std::left << i
			<< " | " << std::setw(15) << std::left << contact.getfirstname()
			<< " | " << std::setw(15) << std::left << contact.getlastname()
			<< " | " << std::setw(15) << std::left << contact.getnickname()
			<< " | " << std::setw(20) << std::left << contact.getdarkestsecret()
			<< " |" << std::endl;
	}
}


void PhoneBook::searchContact() {
	std::cout << std::endl << "| Index | First Name | Last Name | Nickname |" << std::endl;
	std::cout << "|-------|------------|------------|------------|" << std::endl;

	for (int i = 0; i < index; i++) {
		std::cout << "| ";
		std::cout.width(10);
		std::cout << std::right << i << " | ";

		if (contacts[i].getfirstname().length() > 10) {
			std::cout << contacts[i].getfirstname().substr(0, 9) << ".";
		} else {
			std::cout.width(11);
			std::cout << std::right << contacts[i].getfirstname();
		}

		std::cout.width(11);
		std::cout << std::right << contacts[i].getlastname().substr(0, 10) << ".";

		if (contacts[i].getnickname().length() > 10) {
			std::cout.width(11);
			std::cout << std::right << contacts[i].getnickname().substr(0, 9) << ".";
		} else {
			std::cout.width(11);
			std::cout << std::right << contacts[i].getnickname();
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;

	int contactIndex;
	std::cout << "Enter contact index to display: ";
	std::cin >> contactIndex;

	if (contactIndex < 0 || contactIndex >= index) {
		std::cout << "Invalid contact index." << std::endl;
	} else {
		contacts[contactIndex].displayContactInfo();
	}
}



void PhoneBook::inputContact() {
			Contact newContact;
			std::string val;
			std::cout << "Enter first name: " << std::endl;
			std::getline(std::cin, val);
			newContact.setfirstname(val);
			std::cout << "Enter last name: " << std::endl;
			std::getline(std::cin, val);
			newContact.setlastname(val);
			std::cout << "Enter phone number: " << std::endl;
			std::getline(std::cin, val);
			newContact.setphonenumber(val);
			std::cout << "Enter nickname: " << std::endl;
			std::getline(std::cin, val);
			newContact.setnickname(val);
			std::cout << "Enter darkest secret: " << std::endl;
			std::getline(std::cin, val);
			newContact.setdarkestsecret(val);
			addContact(newContact);
}
