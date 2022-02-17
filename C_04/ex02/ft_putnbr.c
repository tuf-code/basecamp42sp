/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:40:28 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/17 19:50:38 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char character)
{
	write(1, &character, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			ft_print('-');
		}
		nb = nb * -1;
		ft_putnbr(nb);
		return ;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_print((nb % 10) + '0');
}
