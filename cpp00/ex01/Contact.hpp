/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:47:36 by majrou            #+#    #+#             */
/*   Updated: 2023/11/18 23:09:37 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_CLASS_HPP
#define Contact_CLASS_HPP

#include<string>
#include <iomanip>
class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string  phone_number;
	std::string darkest_secret;
public:
	Contact(void);
	~Contact(void);
	std::string getfirstname();
	std::string getlastname();
	std::string getnickname();
	std::string getphonenumber();
	std::string getdarkestsecret();
	int setcontact();
	// void setfirstname(std::string val);
	// void setlastname(std::string val);
	// void setnickname(std::string val);
	// void setphonenumber(std::string val);
	// void setdarkestsecret(std::string val);
	void displayContactInfo();
};
#endif
