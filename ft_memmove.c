/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:22:09 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:00 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;

	dst_buf = (unsigned char *) dst;
	src_buf = (unsigned char *) src;
	if (dst || src)
	{
		if ((int)dst < (int)src)
			return (ft_memcpy(dst, src, len));
		while (len--)
			dst_buf[len] = src_buf[len];
	}
	return (dst);
}
