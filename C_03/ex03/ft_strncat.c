/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:14:57 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/16 18:24:28 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*copy;
	int				counter;
	unsigned int	index;

	index = 0;
	counter = 0;
	copy = dest;
	while (copy[counter] != '\0')
		counter++;
	while (index < nb && src[index] != '\0')
	{
		copy[counter] = src[index];
		counter++;
		index++;
	}
	copy[counter] = '\0';
	return (copy);
}
