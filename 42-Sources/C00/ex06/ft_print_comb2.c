/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:30:24 by makarago          #+#    #+#             */
/*   Updated: 2024/01/25 12:08:17 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	left;
	char	right;	

	left = (n / 10) + '0';
	right = (n % 10) + '0';
	write (1, &left, 1);
	write (1, &right, 1);
}

void	ft_seperate(int first, int second)
{
	ft_putchar(first);
	write (1, " ", 1);
	ft_putchar(second);
	if (first != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = first + 1;
	while (first < 99)
	{
		while (second < 100)
		{
			ft_seperate(first, second);
			second++;
		}
		first++;
		second = first + 1;
	}
}
