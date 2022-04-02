/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:56:22 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:25:57 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;

	dst_buf = (unsigned char *) dst;
	src_buf = (unsigned char *) src;
	if (dst || src)
	{
		while (n)
		{
			*dst_buf = *src_buf;
			dst_buf ++;
			src_buf ++;
			n --;
		}
	}
	return (dst);
}
