/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:23:59 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/25 17:24:00 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!(char *)dst && !(char *)src)
		return (NULL);
	if ((char *)src > (char *)dst)
		return (ft_memcpy(dst, src, n));
	while (n--)
		((char *)dst)[n] = ((char *)src)[n];
	return ((char *)dst);
}	
