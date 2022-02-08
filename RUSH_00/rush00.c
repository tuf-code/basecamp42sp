/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:37:43 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/08 04:21:38 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00_first_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('o');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('-');
		else if (counter == total_characters)
			ft_putchar('o');
		counter++;
	}
	ft_putchar('\n');
}

void	rush00_common_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1 || counter == total_characters)
			ft_putchar('|');
		else
			ft_putchar(' ');
		counter++;
	}
	ft_putchar('\n');
}

void	rush00_last_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('o');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('-');
		else if (counter == total_characters)
			ft_putchar('o');
		counter++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	counter;

	if (x < 0 || y < 0)
		return;
	counter = 0;
	while (counter < y)
	{
		if (counter == 0)
			rush00_first_line(x);
		else if (counter == (y - 1))
			rush00_last_line(x);
		else
			rush00_common_line(x);
		counter++;
	}
}
