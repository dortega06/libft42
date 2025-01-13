/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:53:42 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/10 13:36:52 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *strempty, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (strempty[h] == '\0')
		return ((char *)str);
	while (str[h])
	{
		n = 0;
		while (str[h + n] == strempty[n] && (h + n) < len)
		{
			if (str[h + n] == '\0' && strempty[n] == '\0')
				return ((char *)str + h);
			n++;
		}
		if (strempty[n] == '\0')
			return ((char *)str + h);
		h++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "Hola, ¿como estás?";
	const char	*strempty = "Hola";
	size_t	len = 5;
	char	*result = ft_strnstr(str, strempty, len);

	if (result)
		printf("%s\n", result);
	else
		printf("No.\n");
	return (0);
}*/
