/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 03:23:15 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/14 20:16:53 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (counter == 0)
				str[counter] -= ('a' - 'A');
			else if (str[counter - 1] == ' ')
				str[counter] -= ('a' - 'A');
			else if (str[counter - 1] >= '!' && str[counter - 1] <= '/')
				str[counter] -= ('a' - 'A');
			else if (str[counter - 1] >= ':' && str[counter - 1] <= '@')
				str[counter] -= ('a' - 'A');
			else if (str[counter - 1] >= '[' && str[counter - 1] <= '`')
				str[counter] -= ('a' - 'A');
			else if (str[counter - 1] == '~')
				str[counter] -= ('a' - 'A');
		}
		counter++;
	}
	return (str);
}
