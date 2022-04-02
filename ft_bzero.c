/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:54:20 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:25:21 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *) b;
	while (n)
	{
		*buf = 0;
		buf ++;
		n --;
	}
	return ;
}
