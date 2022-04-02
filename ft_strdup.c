/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:17:44 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:12 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = malloc (ft_strlen(s1) + 1);
	if (dest)
	{
		ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
	}
	return (dest);
}
