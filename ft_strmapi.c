/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:48 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/20 13:09:01 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

int	main()
{
	char	str[10] = "holaa.";
	printf("The result is %s\n", str);
	char	*result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}*/
