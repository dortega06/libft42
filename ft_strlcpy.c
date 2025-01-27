/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:58:29 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/27 13:18:25 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main()
{
	char	fuente[] = "Holaa";
	char	destino[10];
	size_t result = ft_strlcpy(destino, fuente, sizeof(destino));

    printf("Fuente: %s\n", fuente);
    printf("Destino: %s\n", destino);
    printf("Longitud de la fuente: %zu\n", result);
	return (0);
}*/
