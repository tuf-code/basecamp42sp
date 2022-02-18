/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:47:08 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/18 17:06:57 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	counter;
	int	result;

	if (nb < 0)
		return (0);
	counter = 1;
	result = 1;
	while (counter <= nb)
	{
		result = result * counter;
		counter++;
	}
	return (result);
}
