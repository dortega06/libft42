/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:21:47 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/27 13:41:20 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "hoala";
	char	*s2 = "holia";
	size_t	n = 12;
	int		result = ft_strncmp(s1, s2, n);

	if (result == 0)
		printf("Las cadenas son iguales.\n", n);
    	else if (result < 0)
		printf("La cadena '%s' es menor '%s'.\n", s1, s2, n);
    	else
		printf("La cadena '%s' es mayor que '%s'.\n", s1, s2, n);
	return (0);
}*/
