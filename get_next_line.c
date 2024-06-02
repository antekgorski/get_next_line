/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:18:55 by agorski           #+#    #+#             */
/*   Updated: 2024/06/02 17:08:27 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_to_buffer(char *buffer, int fd)
{
	char	*temp;
	int		bytes;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (0);
	bytes = 1;
	while (bytes > 0 && !ft_strchr(buffer, '\n')) // dlaczego to czyta tylko do znaku nowej lini?
	{
		bytes = read(fd, temp, BUFFER_SIZE);
		if (bytes = -1)
		{
			if (buffer)
				free(buffer);
			free(temp);
			return (NULL);
		}
		temp[bytes] = '\0';
		buffer = ft_strjoin(buffer, temp)
	}
	free(temp);
	return (buffer);
}
static char	*load_to_line(char *buffer)
{
	char	*str;
	sieze_t	i;
    
    i = 0;
    
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	buffer = read_to_buffer(buffer, fd);
	if (!buffer)
		return (0);
	line = load_to_line(buffer);
}
