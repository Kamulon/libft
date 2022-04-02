/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:02:33 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:38 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinset(int c, char	const *set)
{
	if (*set)
	{
		if (*set == c)
			return (c);
		else
			return (ft_charinset(c, set + 1));
	}
	else
		return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int	i;

	i = 0;
	if (!str || !set)
		return (NULL);
	while (*str && ft_charinset(*str, set))
	{
		str ++;
		i ++;
	}
	if (!*str)
		return (ft_calloc(1, sizeof(char *)));
	while (str[i])
		i++;
	i --;
	while (ft_charinset(str[i], set))
		i --;
	return (ft_substr(str, 0, i + 1));
}
