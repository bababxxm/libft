/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:59:11 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/30 18:59:12 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	istrim(const char c, const char *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);			
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	size;
	char	*res;

	if (!s || !set)
		return (NULL);
	while (*s && istrim(*s, set))
		s++;
	size = ft_strlen(s);
	while (istrim(s[size - 1], set) && size > 0)
		size--;
	res = (char *) malloc(size + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, (char *)s, size + 1);
	return (res);
}

// int	main()
// {
// 	printf("%s", ft_strtrim("abc#121#abc", "#$abc"));
// }
