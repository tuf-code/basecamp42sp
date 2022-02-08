/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:37:43 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/08 04:22:08 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04_first_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('A');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('B');
		else if (counter == total_characters)
			ft_putchar('C');
		counter++;
	}
	ft_putchar('\n');
}

void	rush04_common_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1 || counter == total_characters)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter++;
	}
	ft_putchar('\n');
}

void	rush04_last_line(int total_characters)
{
	int		counter;

	counter = 1;
	while (counter <= total_characters)
	{
		if (counter == 1)
			ft_putchar('C');
		else if (counter > 1 && counter < total_characters)
			ft_putchar('B');
		else if (counter == total_characters)
			ft_putchar('A');
		counter++;
	}
	ft_putchar('\n');
}

void	rush04(int x, int y)
{
	int	counter;

	if (x < 0 || y < 0)
		return;
	counter = 0;
	while (counter < y)
	{
		if (counter == 0)
			rush04_first_line(x);
		else if (counter == (y - 1))
			rush04_last_line(x);
		else
			rush04_common_line(x);
		counter++;
	}
}
