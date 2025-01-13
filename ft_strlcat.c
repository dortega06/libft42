/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:42:16 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/13 14:25:53 by dortega-         ###   ########.fr       */
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
