/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:14 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 23:17:55 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
private:
public:
	int index;
	Contact contacts[8];
	PhoneBook();
	~PhoneBook();
	// void addContact(const Contact& con);
	void displayContact();
	void searchContact();
	// void inputContact();
};

#endif
