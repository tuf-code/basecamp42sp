/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:31:36 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/17 15:55:45 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_string_size_ex04(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

int	ft_strncmp_ex04(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	compare;

	if (*to_find == '\0')
		return (str);
	size = ft_string_size_ex04(to_find);
	while (*str != '\0')
	{
		compare = ft_strncmp_ex04(str, to_find, size);
		if ((*str == *to_find) && compare == 0)
			return (str);
		str++;
	}
	return ('\0');
}
