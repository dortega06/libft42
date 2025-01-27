/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:59:28 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/27 12:42:14 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "Hello, Mundo";
	printf("%s\n",str);
	ft_bzero(str, 7);
	printf("despues %s\n", str);
	return (0);
}*/
