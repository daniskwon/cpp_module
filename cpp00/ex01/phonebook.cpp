/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohkwon <ohkwon@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:29:34 by ohkwon            #+#    #+#             */
/*   Updated: 2022/03/01 18:27:07 by ohkwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

void act_search(text *text)
{
	std::string	index;
	int N;
	std::cout << "acting search\n";
	std::cout << "*********************************************" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < 8 ; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i;
		std::cout << "|";
		std::cout.width(10);
		text[i].act_output1();
		std::cout.width(10);
		text[i].act_output2();
		std::cout.width(10);
		text[i].act_output3();
		std::cout <<  std::endl;
	}
	std::cout << "*********************************************" << std::endl;
	std::cout << "INSERT INDEX NUMBER : ";
	std::getline(std::cin,index);
	N = std::atoi(index.c_str());
	if (N >= 8 || N < 0)
		std::cout << " INDEX NUMBER is not proper \n";
	else
		text[N].echo_all();
	return ;
}

int main()
{
	text text[8];
	std::string cmd;
	int	i = 0;
	while(1)
	{
		std::cout << "Enter a command( ADD or SEARCH oe EXIT )\n\n";
		std::getline(std::cin,cmd);
		if (cmd == "EXIT")
			return(0);
		else if (cmd == "ADD")
			text[i++].act_add();
		else if (cmd == "SEARCH")
			act_search(text);
		else
			std::cout << " Wrong command \n\n";
		if ( i == 8 )
			i = 0 ;

	}
	return (0);
}

