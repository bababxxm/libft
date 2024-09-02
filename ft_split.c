/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:59:21 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/30 18:59:22 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	ft_issep(const char c, char sep)
// {
// 	return(c == sep);
// }

// static int	ft_countstr(const char *s, char c)
// {
// 	int	str;

// 	str = 0;
// 	while (*s)
// 	{
// 		if (ft_issep(*s++, c) && *s != '\0')
// 			str++;
// 	}
// 	return (str);
// }

// static int	ft_countchr(const char c, char sep)
// {
// 	int	chr;

// 	chr = 0;
// 	while (*s)
// 	{
// 		while (ft_issep(*s++, c))
// 			chr = chr;
// 		while (!ft_issep(*s++, c))
// 			chr++;
// 		break ;
// 	}
// 	return (chr);
// }

// // static char	*ft_newstr(const char *s, char c)
// // {

// // }

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	char	**strs;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);	
// 	printf("strs size = %d\n", ft_countstr(s, c));
// 	strs = (char **) malloc(ft_countstr(s, c) + 1);
// 	if (!strs)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		while (ft_issep(s[i], c))
// 			i++;
// 		while (!ft_issep(s[i], c))
// 		{
// 			ft_countchr(s, c)
// 		}
// 	}
// 	printf("str size = %d\n", ft_countchr(s, c));
// 	return (NULL);
// 	while (*s)
// 	{
// 		while (ft_issep(*s, c))
// 		{
// 			return (NULL);
// 		}
// 		while (!ft_issep(*s, c))
// 		{
// 			return (NULL);
// 		}
// 	}
// 	return (NULL);
// }

// int main()
// {
// 	char	**strs;
// 	strs = ft_split("abcd////12354//AB///6//999////", '/');
// 	while (strs)
// 		printf("%s", *strs++);
// }