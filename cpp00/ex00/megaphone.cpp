/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:47:16 by majrou            #+#    #+#             */
/*   Updated: 2023/11/08 23:04:13 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
int main(int ac, char **av)
{
	if(ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	else
	{
		for(int j = 1; j < ac; j++)
		{
			for(int i = 0; av[j][i] ; i++)
			{
				std::cout << (char)toupper(av[j][i]);
			}
			
		}
		std::cout << std:: endl;
		}
	return 0;
}
