/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:27:31 by sklaokli          #+#    #+#             */
/*   Updated: 2024/08/25 17:27:32 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || (ptr[i] == ' '))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i++] == '-')
			sign = -1;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
		result = (result * 10) + (ptr[i++] - 48);
	return (sign * result);
}

// int	main()
// {
// 	printf("%d", ft_atoi("-1234"));
// }