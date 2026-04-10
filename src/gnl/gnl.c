/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:04:59 by sklaokli          #+#    #+#             */
/*   Updated: 2026/04/10 16:45:27 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnl	*new_buffer(char *buf)
{
	t_gnl	*new;

	new = malloc(sizeof(t_gnl));
	if (!new)
		return (NULL);
	new->len = ft_strlen(buf);
	new->buf = ft_strdup(buf);
	new->next = NULL;
	return (new);
}

void	add_buffer(t_gnl **content, t_gnl *new)
{
	ft_lstadd_back((void **)content, (void *)new);
}

bool	has_newline(char *buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (true);
		i++;
	}
	return (false);
}

void	read_to_newline(int fd, t_gnl **content)
{
	int		i;
	t_gnl	*new;
	char	buf[BUFFER_SIZE + 1];

	while (1)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i <= 0)
			return ;
		buf[i] = '\0';
		add_buffer(content, new_buffer(buf));
		if (has_newline(buf))
			break ;
	}
}

int	len_to_newline(t_gnl *content)
{
	int	i;
	int	len;

	len = 0;
	while (content)
	{
		i = 0;
		while (content->buf[i])
		{
			len++;
			if (content->buf[i] == '\n')
				return (len);
			i++;
		}
		content = content->next;
	}
	return (len);
}

char	*copy_and_update(char *line, int len, t_gnl **content)
{
	int		i;
	int		cnt;
	char	*buf;
	t_gnl	*tmp;

	i = 0;
	cnt = 0;
	while ((*content)->copied > 0)
		line[cnt++] = buf[i++];
	while (*content && cnt < len)
	{
		i = 0;
		tmp = *content;
		buf = (*content)->buf;
		while (buf[i] && cnt < len)
			line[cnt++] = buf[i++];
		(*content)->copied = i;
		if (cnt == len)
			break ;
		*content = (*content)->next;
		free(tmp->buf);
		free(tmp);
	}
	line[cnt] = '\0';
	return (line);
}

char	*extract_line(t_gnl **content)
{
	int		len;
	t_gnl	*tmp;
	char	*line;

	len = len_to_newline(*content);
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	copy_and_update(line, len, content);
	return (line);
}

char	*get_next_line(int fd)
{
	char			*line;
	static t_gnl	*content;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	read_to_newline(fd, &content);
	if (!content)
		return (NULL);
	line = extract_line(&content);
	return (line);
}
