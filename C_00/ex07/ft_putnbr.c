/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:22:36 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/09 17:41:45 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

short	negative_number(int number)
{
	if (number < 0)
	{
		if (number == -2147483648)
			write(1, "-2147483648", 11);
		else
			print('-');
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (negative_number(nb))
	{
		print(nb * -1);
		return ;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	print((nb % 10) + '0');
}
