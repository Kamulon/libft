/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:05:42 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:24 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (i > dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[j] && dstsize > i + j + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
