/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:59:23 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/19 19:01:25 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(0));
	return (0);
}
*/
