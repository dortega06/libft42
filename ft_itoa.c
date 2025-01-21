/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dortega- <dortega-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:06:09 by dortega-          #+#    #+#             */
/*   Updated: 2025/01/21 13:36:11 by dortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int n)
{
	int	len;

	len = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n = n *(-1);
			len++;
		}
		while (n != 0)
		{
			n = n / 10;
			len++;
		}
	}
	else
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = count_char(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
