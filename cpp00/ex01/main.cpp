/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:56:01 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 23:16:52 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "PhoneBook.hpp"
int main(){
	PhoneBook pb;
	int check = 0;
	std::string command;

	while (std::cin) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD") {
			check = pb.contacts[pb.index % 8].setcontact();
			if (check == 0) {
				pb.index++;
			}
		} else if (command == "SEARCH"){
			pb.searchContact();
		} else if (command == "EXIT") {
			return 0;
		// } else {
		// 	std::cout << "Invalid command!" << std::endl;
		}
	}
}

