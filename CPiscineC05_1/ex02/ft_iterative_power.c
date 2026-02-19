/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:45:12 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/18 20:50:37 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(5, 0));
	return (0);
}
*/
