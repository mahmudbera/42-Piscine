/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:43:56 by makarago          #+#    #+#             */
/*   Updated: 2024/01/27 15:01:13 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// insertion sort
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		key;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1 ;
		while (j >= 0 && tab[j] > key)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
		i++;
	}
}
