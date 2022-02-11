/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:30:02 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/10 16:15:22 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	min_index_value;

	index = 0;
	while (index < size)
	{
		size--;
		min_index_value = tab[index];
		tab[index] = tab[size];
		tab[size] = min_index_value;
		index++;
	}
}
