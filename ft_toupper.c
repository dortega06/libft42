/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:04:40 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/07 12:40:54 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		c -= 32;
	}
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	char str = 'h';
	char st;
	
	st = ft_toupper(str);
	printf("%c\n", st);
	return (0);
}*/
