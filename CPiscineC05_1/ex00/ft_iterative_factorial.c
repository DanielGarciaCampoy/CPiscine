/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:25:36 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/18 20:29:55 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb - 1;
	num = nb;
	while (i > 0)
	{
		num *= i;
		i--;
	}
	return (num);
}

/*
#include <stdio.h>

int	main(void)
{
	int res = ft_iterative_factorial(4);
	int res1 = ft_iterative_factorial(0);
	int res2 = ft_iterative_factorial(-5);

	printf("%d\n", res);
	printf("%d\n", res1);
	printf("%d\n", res2);
	return (0);
}
*/
