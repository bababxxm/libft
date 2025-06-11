/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mtx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:28:28 by sklaokli          #+#    #+#             */
/*   Updated: 2025/06/11 20:39:57 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_mtx(void **matrix)
{
	int	idx;

	if (!matrix)
		return ;
	idx = 0;
	while (matrix[idx])
		free(matrix[idx++]);
	free(matrix);
}
