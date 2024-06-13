/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:41:27 by makarago          #+#    #+#             */
/*   Updated: 2024/01/27 14:52:49 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		swap;

	count = 0;
	while (count < size / 2)
	{
		swap = tab[size - count - 1];
		tab[size - count - 1] = tab[count];
		tab[count] = swap;
		count++;
	}
}
