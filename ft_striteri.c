/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:17:28 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/27 15:30:05 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	index_and_char(unsigned int index, char *c)
{
	printf("Índice: %u, Carácter: %c\n", index, *c);
}
int	main(void)
{
	char str[] = "Hola Mundo";
	ft_striteri(str, index_and_char);
	return (0);
}*/
