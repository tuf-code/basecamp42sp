/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:04:03 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/14 02:41:49 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 0 && str[counter] <= 31) || str[counter] >= 127)
			return (0);
		counter++;
	}
	return (1);
}
