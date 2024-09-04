/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:53:44 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/29 18:53:45 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	if (!n || !size)
	{
		res = (void *)malloc(0);
		if (!res)
			return (NULL);
		ft_bzero(res, 0);
		return (res);
	}
	if (size > __INT_MAX__ || n > __INT_MAX__)
		return (NULL);
	res = (void *)malloc(n * size);
	if (!res)
		return (NULL);
	ft_bzero(res, n * size);
	return (res);
}
