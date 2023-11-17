/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:56:01 by majrou            #+#    #+#             */
/*   Updated: 2023/11/17 16:56:25 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "PhoneBook.hpp"
int main(){
	PhoneBook phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD") {
			phonebook.inputContact();
		} else if (command == "SEARCH"){
			int index;
			std::cout << "Enter index to search: " << std::endl;
			std::cin >> index;
			phonebook.searchContact(index);
			std::cin.ignore();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command!" << std::endl;
		}
	}
}

