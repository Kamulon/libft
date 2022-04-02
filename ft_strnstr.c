/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:18:58 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:32 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_len;
	size_t	n_len;

	if (!*needle)
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	h_len = ft_strlen(haystack);
	while (*haystack && len >= n_len && n_len <= h_len)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		len --;
		h_len --;
		haystack ++;
	}
	return (NULL);
}
