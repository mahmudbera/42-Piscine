/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:28:22 by makarago          #+#    #+#             */
/*   Updated: 2024/02/03 16:57:17 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	count2;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	count = 0;
	count2 = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '-')
			sign *= -1;
		else if (str[count] >= '0' && str[count] <= '9')
		{
			while (str[count + count2] >= '0' && str[count + count2] <= '9')
			{
				result = result * 10 + (str[count + count2] - '0');
				count2++;
			}
			return (sign * result);
		}
		count++;
	}
	return (0);
}
