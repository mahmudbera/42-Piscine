/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:04:32 by makarago          #+#    #+#             */
/*   Updated: 2024/02/01 14:47:55 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				l;
	unsigned int	count;

	l = 0;
	while (dest[l])
	{
		l++;
	}
	count = 0;
	while (src[count] && count < nb)
	{
		dest[l] = src[count];
		l++;
		count++;
	}
	dest[l] = '\0';
	return (dest);
}
