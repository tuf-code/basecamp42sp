/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:58:25 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/16 18:13:47 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*copy;
	int		counter;
	int		index;

	index = 0;
	counter = 0;
	copy = dest;
	while (copy[counter] != '\0')
		counter++;
	while (src[index] != '\0')
	{
		copy[counter] = src[index];
		counter++;
		index++;
	}
	copy[counter] = '\0';
	return (copy);
}
