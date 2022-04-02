/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:18:57 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:33:58 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strmapi;

	i = 0;
	if (!s)
		return (NULL);
	strmapi = malloc(ft_strlen(s) + 1);
	if (strmapi)
	{
		while (s[i])
		{
			strmapi[i] = f(i, s[i]);
			i ++;
		}
		strmapi[i] = '\0';
	}
	return (strmapi);
}
