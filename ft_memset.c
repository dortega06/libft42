/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:33:59 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/13 12:48:47 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = a;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (a);
}
