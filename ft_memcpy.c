/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:31:10 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/03 14:44:02 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned int	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	int	fuente[] = {1, 2, 3, 4, 5};
	int	destino[5];
	ft_memcpy(destino, fuente, sizeof(fuente));
	size_t	i;
	i = 0;
	while (i < 5)
	{
		printf("cadedena: %d\n", destino[i]);
		i++;
	}
}*/
