/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:36:47 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/09 16:32:08 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "Hello, world!";
    char	*result;

    result = ft_memchr(str, 'w', 13);
    if (result != NULL)
		printf("Encontrado en la posición: %ld\n", result - str);
    else
	{
		printf("Carácter no encontrado.\n");
	}
	return (0);
}*/
