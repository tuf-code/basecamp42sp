/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:33:10 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/15 19:23:24 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z') 
			|| (str[counter] >= 'A' && str[counter] <= 'Z')))
			return (0);
		counter++;
	}
	return (1);
}
