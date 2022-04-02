/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:05:53 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:30 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		cmp = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (cmp == 0)
			i++;
		else
			return (cmp);
	}
	return (0);
}
