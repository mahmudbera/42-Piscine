/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:03:27 by makarago          #+#    #+#             */
/*   Updated: 2024/02/08 11:18:55 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb < 2)
		return (0);
	count = 2;
	while (count <= nb / 2)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
