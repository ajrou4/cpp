/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:11 by majrou            #+#    #+#             */
/*   Updated: 2023/11/13 21:27:39 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void){
	std::cout << "constructor called" << std::endl;
}
PhoneBook:: ~PhoneBook(void){
	std:: cout << "destructor called" << std::endl;
}

void PhoneBook::addcontact(Contact con){
	static int index;
	if(index <= 8)
	{
		contacts[index].setfirstname(con.getfirstname());
		contacts[index].setlastname(con.getlastname());
		contacts[index].setnickname(con.getnickname());
		contacts[index].setphonenumber(con.getphonenumber());
		contacts[index].setarkestsecret(con.getdarkestsecret());
		index++;
	}
	else
		std::cout << "Cannot add more contacts." << std::endl;
}
 