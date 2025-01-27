/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:41:57 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/27 14:02:57 by dortega-         ###   ########.fr       */
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
	size_t count = 5;
    size_t size = sizeof(int);
	int *arr = (int *)ft_calloc(count, size);
	size_t i = 0;
    if (arr)
	{
    	while (i < count)
		{
        	printf("arr[%zu] = %d\n", i, arr[i]);
			i++;
		}
    }
    free(arr);
    return 0;
}*/
