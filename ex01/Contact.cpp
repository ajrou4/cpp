/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:02:34 by majrou            #+#    #+#             */
/*   Updated: 2023/11/15 05:44:13 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std:: cout << "constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std:: cout << "destructor called" << std::endl;
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
void Contact:: setfirstname(std:: string val){
	first_name = val;
}
void Contact:: setlastname(std:: string val){
	last_name = val;
}
void Contact:: setnickname(std:: string val){
	nickname = val;
}
void Contact:: setphonenumber(std:: string val){
	phone_number = val;
}
void Contact :: setdarkestsecret(std :: string val){
	darkest_secret = val;
}

