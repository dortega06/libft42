/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:36:07 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/13 16:29:40 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(str);
	if (a == '\0')
		return ((char *) &str[i]);
	while (i >= 0)
	{
		if (str[i] == a)
			return ((char *) &str[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "hola o";
	char	c = 'y';
	char *result = ft_strrchr(str, c);

	if (result != NULL)
		printf("La última ocurrencia de '%c' se encuentra en: %s\n", c, result);
	else
		printf("no.\n");
	return (0);
}*/
