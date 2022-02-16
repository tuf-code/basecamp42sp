/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:25:28 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/15 17:56:06 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	size -= 1;
	while (counter < size && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < size)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (counter);
}
