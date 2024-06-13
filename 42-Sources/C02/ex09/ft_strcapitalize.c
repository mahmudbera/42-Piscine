/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:24:45 by makarago          #+#    #+#             */
/*   Updated: 2024/01/29 17:41:45 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	check;

	str = ft_strlowcase(str);
	check = 1;
	count = 0;
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (check == 1)
			{
				str[count] -= 32;
				check = 0;
			}
		}
		else if (str[count] >= '0' && str[count] <= '9')
			check = 0;
		else
			check = 1;
		count++;
	}
	return (str);
}
