/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:06:20 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/18 17:47:57 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive(int number, int factorial)
{
	number = number * factorial--;
	if (factorial > 0)
		return (ft_recursive(number, factorial));
	return (number);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_recursive(nb, nb));
}
