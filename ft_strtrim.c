/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:33 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/17 14:59:07 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str)
		ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	*s1 = "**Hello**";
	char	*set = "*";
	char	*result = ft_strtrim(s1, set);

	printf("%s\n", result);
	free (result);
	return (0);
}*/
