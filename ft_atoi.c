/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:44:16 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 21:25:56 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *c)
{
	if (*c == '\t' || *c == '\n' || *c == '\v')
		return (1);
	if (*c == '\f' || *c == '\r' || *c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	while (ft_isspace(str))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1 * i;
		str ++;
	}
	while (ft_isdigit(*str))
	{
		nb = (nb * 10) + *str - '0';
		str++;
	}
	return (nb * i);
}
