/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:44:09 by sklaokli          #+#    #+#             */
/*   Updated: 2025/05/15 22:23:29 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exit(char *str, int status)
{
	int	fd;

	if (status == 0)
		fd = 1;
	else
		fd = 2;
	if (!str)
		exit(status);
	while (*str)
		write(fd, str++, 1);
	write(fd, "\n", 1);
	exit(status);
}
