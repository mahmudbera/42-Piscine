/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:10:57 by makarago          #+#    #+#             */
/*   Updated: 2024/01/25 16:52:34 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int ab)
{
	if (ab == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ab = 147483648;
	}
	if (ab < 0)
	{
		write (1, "-", 1);
		ab *= -1;
	}
	if (ab <= 9)
		ft_putchar(ab + '0');
	if (ab > 9)
	{
		ft_putnbr(ab / 10);
		ft_putnbr(ab % 10);
	}
}
