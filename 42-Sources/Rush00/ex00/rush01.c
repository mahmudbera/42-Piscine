/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:52:18 by makarago          #+#    #+#             */
/*   Updated: 2024/01/28 17:13:07 by makarago         ###   ########.fr       */
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
				|| (row_c == row && row_c != 1 && c_c == col && c_c != 1))
				ft_putchar('/');
			else if ((row_c == row && c_c == 1) || (row_c == 1 && c_c == col))
				ft_putchar('\\');
			else if ((row_c > 1 && row_c < row) && (c_c > 1 && c_c < col))
				ft_putchar(' ');
			else
				ft_putchar('*');
			c_c++;
		}
		ft_putchar('\n');
		row_c++;
	}
}
