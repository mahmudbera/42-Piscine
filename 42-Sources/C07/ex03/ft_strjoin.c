/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:38:28 by makarago          #+#    #+#             */
/*   Updated: 2024/02/10 14:58:18 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	f_matris_len(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	f_string_len(char *sep)
{
	int	count;

	count = 0;
	while (sep[count])
		count++;
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		count;

	new = (char *) malloc((f_matris_len(size, strs)
				+ (f_string_len(sep) * (size - 1)) + 1) * sizeof(char));
	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			new[count++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			new[count++] = sep[j++];
		i++;
	}
	new[count] = '\0';
	return (new);
}
