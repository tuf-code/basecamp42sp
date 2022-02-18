/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:56 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/18 02:38:51 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	signal;

	index = 0;
	result = 0;
	signal = 1;
	while (str[index] >= '\t' && str[index] <= '\r' || str[index] == ' ')
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			signal = signal * -1;
		index++;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10;
		result += str[index] - '0';
		index++;
	}
	return (result * signal);
}
