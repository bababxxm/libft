/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 17:00:13 by sklaokli          #+#    #+#             */
/*   Updated: 2025/06/28 19:32:10 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_gnl
{
	struct s_gnl	*next;
	int				copied;
	int				len;
	char			*buf;
}	t_gnl;

char	*get_next_line(int fd);

#endif