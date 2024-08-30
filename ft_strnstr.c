/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:27:19 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/25 17:27:20 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	size = ft_strlen(needle);
	if (!needle)
		return ((char *)haystack);
	while (haystack && len > 0)
	{
		if (!ft_strncmp(haystack, needle, size) && len >= size)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s", ft_strnstr("Hello World", "W", 6));
// }