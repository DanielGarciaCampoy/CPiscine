/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:48:41 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/17 18:25:59 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
		x = 0;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "hola mundo";
	char	s2[] = "mundo";
	char	s3[] = "";

	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, s3));
	return (0);
}
*/
