/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:14:13 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/06 13:26:43 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	resto;

	division = *a / *b;
	resto = *a % *b;
	*a = division;
	*b = resto;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\nResto: %d", a, b);
	return (0);
}
*/
