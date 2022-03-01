/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohkwon <ohkwon@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:13:54 by ohkwon            #+#    #+#             */
/*   Updated: 2022/03/01 22:24:33 by ohkwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class text
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
	void	act_add();
	void	act_output1();
	void	act_output2();
	void	act_output3();
	void	echo_all();
};
void	text::echo_all()
{
		std::cout << "*********************************************" << std::endl;
		std::cout << "first name: " << this->first_name << std::endl;
		std::cout << "last name: " << this->last_name << std::endl;
		std::cout << "nickname: " << this->nickname << std::endl;
		std::cout << "phone number: " << this->phone_number << std::endl;
		std::cout << "darkest secret: " << this->darkest_secret << std::endl;
		std::cout << "*********************************************" << std::endl;
}
void text::act_add()
{
	std::cout << "*********************************\n";
	std::cout << "|          Insert Text          |" << "\n";
	std::cout << "*********************************\n";
	std::cout << "first_name :";
	std::getline(std::cin,this->first_name);
	std::cout << "last_name : ";
	std::getline(std::cin,this->last_name);
	std::cout << "nick_name : ";
	std::getline(std::cin,this->nickname);
	std::cout << "phone_number : ";
	std::getline(std::cin,this->phone_number);
	std::cout << "darkest_secret : ";
	std::getline(std::cin,this->darkest_secret);
	std::cout << "*********************************\n";
	return ;
}
void	text::act_output1()
{
	if (this->first_name.length() <= 10)
		std::cout << this->first_name << "|";
	else 
		std::cout << (this->first_name.substr(0, 9) + ".") << "|";
	return ;
}
void	text::act_output2()
{
	if (this->last_name.length() <= 10)
		std::cout << this->last_name << "|";
	else
		std::cout << (this->last_name.substr(0, 9) + ".") << "|";
	return ;
}
void	text::act_output3()
{
	if (this->nickname.length() <= 10)
		std::cout << this->nickname << "|";
	else
		std::cout << (this->nickname.substr(0, 9) + ".") << "|";
	return ;
}
