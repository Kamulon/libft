/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:15:19 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:25:55 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_buf;
	unsigned char	*s2_buf;

	s1_buf = (unsigned char *)s1;
	s2_buf = (unsigned char *)s2;
	while (n)
	{
		if (*s1_buf != *s2_buf)
			return ((unsigned char) *s1_buf - *s2_buf);
		n --;
		s1_buf ++;
		s2_buf ++;
	}
	return (0);
}
