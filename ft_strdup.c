/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:58:27 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/10 15:50:03 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	const char *original = "Hola, Mundoo!";
	char		*copy = ft_strdup(original);
	if (copy == NULL)
	{
		printf("error al asignar memoria.\n");
		return (1);
	}
	printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", copy);
	free(copy);
	return (0);
}*/
