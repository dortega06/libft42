/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:36:07 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/23 15:49:29 by dortega-         ###   ########.fr       */
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
	const char	*str = "hola y";
	char	c = 'y';
	char *result = ft_strrchr(str, c);

	if (result != NULL)
		printf("%s\n", result);
	else
		printf("no.\n");
	return (0);
}*/
