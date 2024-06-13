/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:21:01 by makarago          #+#    #+#             */
/*   Updated: 2024/01/25 12:10:15 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1 ;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				if (first != '7')
					write (1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}
