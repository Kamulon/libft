/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:20:36 by cperegri          #+#    #+#             */
/*   Updated: 2021/10/25 18:26:05 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char	*str, int fd)
{	
	if (!str)
		return ;
	while (*str)
	{
		write (fd, str, 1);
		str++;
	}
	write(fd, "\n", 1);
}
