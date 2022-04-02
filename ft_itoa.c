/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:00:18 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/26 17:56:08 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n, int i)
{
	if (n <= -10)
		return (ft_intlen(-(n / 10), i + 2));
	if (n < 0)
		return (ft_intlen(-(n / 10), i + 1));
	if (n >= 10)
		return (ft_intlen(n / 10, i + 1));
	else
		return (i + 1);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*num;

	numlen = ft_intlen(n, 1);
	num = malloc(numlen);
	if (!num)
		return (NULL);
	*(num + numlen-- - 1) = '\0';
	if (n >= 0)
	{
		while (numlen--)
		{
			*(num + numlen) = n % 10 + '0';
			n /= 10;
		}
		return (num);
	}
	*num = '-';
	while (--numlen)
	{
		*(num + numlen) = -(n % 10) + '0';
		n /= 10;
	}
	return (num);
}
