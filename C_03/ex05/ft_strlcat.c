/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:28:02 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/17 16:22:26 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int	ft_string_size_ex05(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dest_size;
	int				src_size;
	int				index;
	unsigned int	max;

	dest_size = ft_string_size_ex05(dest);
	src_size = ft_string_size_ex05(src);
	max = dest_size;
	index = 0;
	size -= 1;
	while (max < size && src[index] != '\0')
	{
		dest[max] = src[index];
		max++;
		index++;
	}
	dest[max] = '\0';
	return (dest_size + src_size);
}

int main(void)
{
	puts(" ### EX05 ft_strlcat ###");
	puts("compilar com a flag -lbsd");
	char *src = "ABCDEF";
	char dest[11] = "DE";
	char *srco = "ABCDEF";
	char desto[11] = "DE";

	printf("\n");
	printf("Retorno da func: %d\n", ft_strlcat(dest, src, 5));
	printf("Dest da func: %s\n", dest);
	printf("Retorno da func original: %ld\n", strlcat(desto, srco, 5));
	printf("Dest da func original: %s\n", desto);
	return (0);
}