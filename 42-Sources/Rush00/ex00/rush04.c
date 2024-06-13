/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:56:15 by makarago          #+#    #+#             */
/*   Updated: 2024/01/28 17:09:09 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error(int col, int row)
{
	if (col > 0 && row > 0 && row < 2147483647 && col < 2147483647)
	{
		return (0);
	}
	else
	{
		write (1, "Please enter a positive integer for row and column\n", 51);
		return (1);
	}
}

void	rush(int col, int row)
{
	int	row_c;
	int	c_c;

	if (error(col, row))
		return ;
	row_c = 1;
	while (row_c <= row)
	{
		c_c = 1;
		while (c_c <= col)
		{
			if ((row_c == 1 && c_c == 1)
				|| (row_c == row && c_c == col && c_c != 1 && row_c != 1))
				ft_putchar('A');
			else if ((row_c == row && c_c == 1) || (row_c == 1 && c_c == col))
				ft_putchar('C');
			else if ((row_c > 1 && row_c < row) && (c_c > 1 && c_c < col))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c_c++;
		}
		ft_putchar('\n');
		row_c++;
	}
}
