/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguirra- <oguirra-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:14:16 by oguirra-          #+#    #+#             */
/*   Updated: 2022/02/10 17:49:00 by oguirra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	index;
	int	index_value;
	int	smaller_index;

	counter = 0;
	index = 0;
	while (counter < size)
	{
		while (index < size)
		{
			if (index == 0)
				smaller_index = index;
			if (tab[index] <= tab[smaller_index])
				smaller_index = index;
			index++;
		}
		index_value = tab[counter];
		tab[counter] = tab[smaller_index];
		tab[smaller_index] = index_value;
		counter++;
		index = counter;
		smaller_index = index;
	}
}
