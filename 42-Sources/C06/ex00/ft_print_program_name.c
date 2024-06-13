/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:42:39 by makarago          #+#    #+#             */
/*   Updated: 2024/02/07 15:43:25 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	while (argv[0][count] && argc > 0)
	{
		write(1, &argv[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	return (0);
}
