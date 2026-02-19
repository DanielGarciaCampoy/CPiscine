/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:52:11 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/19 20:53:03 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = argc -1;
	while (x > 0)
	{
		i = 0;
		while (argc && argv[x][i])
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x--;
	}
	return (0);
}
