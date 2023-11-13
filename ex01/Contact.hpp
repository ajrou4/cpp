/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:47:36 by majrou            #+#    #+#             */
/*   Updated: 2023/11/13 17:52:31 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_CLASS_HPP
#define Contact_CLASS_HPP
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
	void setfirstname(std::string val);
	void setlastname(std::string val);
	void setnickname(std::string val);
	void setphonenumber(std::string val);
	void setarkestsecret(std::string val);
};
#endif
