/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:32:14 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/07 12:50:10 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str = 'h';
	char	st;

	st = ft_tolower(str);
	printf("%c\n", st);
	return (0);
}*/
