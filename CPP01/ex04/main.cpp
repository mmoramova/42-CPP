/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:19:08 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/15 18:22:06 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error. Please enter 3 arguments: filename, s1, s2" << std::endl;
		return 1;
	}

	std::string infileText;
	std::string infileLine;
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::size_t pos = 0;

	std::ifstream infile (fileName, std::ifstream::in);

	if (infile.is_open())
	{
		while (getline(infile, infileLine)) {
			infileText += infileLine + '\n';
		}
		infileText += '\n';
		infileText.pop_back();
	}
	else
	{
		std::cout << "Error opening file." << std::endl;
		return 1;
	}
	infile.close();

	if (s1.length() > 0)
	{
		while ( (pos = infileText.find(s1, pos)) != std::string::npos )
		{
			infileText.erase(pos,s1.length());
			infileText.insert(pos,s2);
			pos += s2.length();
		}
	}
	std::ofstream outfile (fileName + ".replace");
	outfile << infileText;
	outfile.close();
	return 0;
}
