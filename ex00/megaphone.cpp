/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:04:45 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/02 20:56:21 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	upperstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (++i < argc)
			upperstr(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}