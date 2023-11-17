/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:11 by majrou            #+#    #+#             */
/*   Updated: 2023/11/17 16:59:05 by majrou           ###   ########.fr       */
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
	std::cout << "| " << std::setw(9) << std::left << "Index"
		<< " | " << std::setw(9) << std::left << "First Name"
		<< " | " << std::setw(9) << std::left << "Last Name"
		<< " | " << std::setw(9) << std::left << "Nickname"
		<< " |" << std::endl;
	for (int i = 0; i < index; i++) {
		Contact contact = contacts[i];
		std::cout << "| " << std::setw(9) << std::left << i
			<< " | " << std::setw(9) << std::left << contact.getfirstname()
			<< " | " << std::setw(9) << std::left << contact.getlastname()
			<< " | " << std::setw(9) << std::left << contact.getnickname()
			<< " |" << std::endl;
	}
}

void  PhoneBook::searchContact(int contactIndex) {
	if (contactIndex < 0 || contactIndex >= index) {
		std::cout << "Invalid contactIndex!" << std::endl;
		return;
	}

	Contact contact = contacts[contactIndex];
	std::cout << std::setw(10) << std::left << contact.getfirstname()
	 << std::setw(10) << std::left << contact.getlastname()
	 << std::setw(10) << std::left << contact.getnickname()
		 << std::endl;
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
