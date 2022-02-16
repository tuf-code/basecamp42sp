/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:37 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/15 04:46:52 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char character)
{
	write(1, &character, 1);
}

void	print_hexadecimal(int decimal)
{
	int	unity;

	unity = 0;
	if (decimal < 16)
	{
		if (decimal < 10)
			print(decimal + '0');
		else
			print(decimal + 87);
	}
	else
	{
		print(decimal / 16);
		unity = decimal % 16;
		if (unity < 10)
			print(unity);
		else
			print(unity + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 0 && str[counter] <= 31)
		{
			write(1, "\\", 1);
			if (str[counter] <= 15)
				write(1, "0", 1);
			print_hexadecimal(str[counter]);
		}
		else
			write(1, &str[counter], 1);
		counter++;
	}
}
