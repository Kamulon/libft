/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:17:57 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:15 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = malloc(s1_len + s2_len + 1);
	if (strjoin)
	{
		ft_strlcpy(strjoin, s1, s1_len + 1);
		ft_strlcat(strjoin, s2, s1_len + s2_len + 1);
	}
	return (strjoin);
}
