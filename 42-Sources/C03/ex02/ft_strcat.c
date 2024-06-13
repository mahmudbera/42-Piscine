/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:49:44 by makarago          #+#    #+#             */
/*   Updated: 2024/02/03 11:23:56 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	l;
	int	count;

	l = 0;
	while (dest[l])
		l++;
	count = 0;
	while (src[count])
	{
		dest[l] = src[count];
		l++;
		count++;
	}
	dest[l] = '\0';
	return (dest);
}
