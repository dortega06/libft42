/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:44:32 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/13 16:15:38 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str)
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (a == '\0')
		return ((char *)str);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Hola l";
    char *result = ft_strchr(str, 'l');

    if (result != NULL) {
        printf("Carácter encontrado en: %s\n", result);
    } else {
        printf("Carácter no encontrado.\n");
    }
	return (0);
}*/
