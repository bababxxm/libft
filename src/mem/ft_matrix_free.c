/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mtx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:28:28 by sklaokli          #+#    #+#             */
/*   Updated: 2025/06/23 16:55:43 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrix_free(void **mtx)
{
	int	idx;

	if (!mtx)
		return ;
	idx = 0;
	while (mtx[idx])
		free(mtx[idx++]);
	free(mtx);
}
