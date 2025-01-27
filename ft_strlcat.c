/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:42:16 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/23 15:45:23 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && dstlen + 1 < dstsize)
	{
		dest[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dest[dstlen] = '\0';
	return (dstlen + ft_strlen(&src[i]));
}
/*
#include <stdio.h>

int	main(void)
{
	char	d[] = "diana ";
	const char	*o = "ortega";
	size_t	i = 60;
	size_t res;

	res = ft_strlcat(d, o, i);
	printf("%s\n", d);
	return (0);
}*/
