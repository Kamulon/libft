/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:13 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:25:51 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_buf;

	s_buf = (unsigned char *) s;
	while (n)
	{
		if (*s_buf == (unsigned char)c)
			return ((void *)s_buf);
		n --;
		s_buf ++;
	}	
	return (0);
}
