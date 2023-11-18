/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:14 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 01:00:47 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
private:
	Contact contacts[8];
	int index;
public:
	PhoneBook();
	~PhoneBook();
	void addContact(const Contact& con);
	void displayContact();
	void searchContact();
	void inputContact();
};

#endif
