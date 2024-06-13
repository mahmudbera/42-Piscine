/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:03:51 by makarago          #+#    #+#             */
/*   Updated: 2024/02/10 14:58:29 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*new;
	int		count;
	int		size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	new = (int *) malloc(sizeof(int) * (size));
	if (!new)
	{
		*range = NULL;
		return (-1);
	}
	count = 0;
	while (count < size)
		new[count++] = min++;
	*range = new;
	return (size);
}
