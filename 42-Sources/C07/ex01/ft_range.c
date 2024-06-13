/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:04:36 by makarago          #+#    #+#             */
/*   Updated: 2024/02/10 14:52:24 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
		return (0);
	new = (int *) malloc(sizeof(int) * (max - min));
	if (!new)
		return (0);
	i = 0;
	while (min < max)
	{
		new[i++] = min++;
	}
	return (new);
}
