/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:30:33 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/03 16:17:34 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *origen, size_t len)
{
	unsigned char	*src;
	unsigned char	*des;

	if (origen == NULL && dest == NULL)
		return (NULL);
	src = (unsigned char *)origen;
	des = (unsigned char *)dest;
	if (des >= src)
	{
		while (len--)
			des[len] = src[len];
	}
	else
		ft_memcpy(des, src, len);
	return (des);
}
