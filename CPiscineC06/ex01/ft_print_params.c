/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:44:26 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/19 20:47:17 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
