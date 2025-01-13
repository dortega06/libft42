/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:41:57 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/10 14:53:24 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * num);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int *arr = (int *)ft_calloc(5, sizeof(int));

    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    printf("Valores del arreglo:\n");
    for (int i = 0; i < 5; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}*/
