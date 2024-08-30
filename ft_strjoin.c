/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:59:01 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/30 18:59:02 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int append_str(char *dst, char *src, int i, int j)
{
	while (src[j])
		dst[i++] = src[j++];
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*res;

	len = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	len = append_str(res, (char *)s1, len, 0);
	len = append_str(res, (char *)s2, len, 0);
	res[len] = '\0';
	return (res);
}

// int	main()
// {
// 	printf("%s", ft_strjoin("abc", "123"));
// }
