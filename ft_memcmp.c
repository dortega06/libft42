/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:35:33 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/10 15:51:51 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
    char str2[] = "Hello";
    
    int result = ft_memcmp(str1, str2, 5);
    
    if (result < 0)
        printf("str1 es menor que str2\n");
    else if (result > 0)
        printf("str1 es mayor que str2\n");
    else
        printf("str1 es igual a str2\n");
    
    return 0;
}*/
