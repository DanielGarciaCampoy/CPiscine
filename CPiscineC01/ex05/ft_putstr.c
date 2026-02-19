/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:29:53 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/06 14:32:33 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cuenta;

	cuenta = 0;
	while (str[cuenta] != '\0')
	{
		write(1, &str[cuenta], 1);
		cuenta++;
	}
}

/*
int	main(void)
{
	char	*string;	

	string = "string";
	ft_putstr(string);
}
*/
