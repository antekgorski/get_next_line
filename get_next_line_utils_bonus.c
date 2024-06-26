/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:18:46 by agorski           #+#    #+#             */
/*   Updated: 2024/06/04 15:08:33 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *buffer, int c)
{
	int	i;

	i = 0;
	if (!buffer)
		return (0);
	if (c == '\0')
		return (buffer + ft_strlen(buffer));
	while (buffer[i])
	{
		if (buffer[i] == c)
			return (&buffer[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *buffer, char *temp)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!temp)
		return (0);
	if (!buffer)
	{
		buffer = (char *)malloc(sizeof(char));
		buffer[0] = '\0';
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(temp)
				+ 1));
	if (!str)
		return (0);
	i = -1;
	j = 0;
	while (buffer && buffer[++i] != '\0')
		str[i] = buffer[i];
	while (temp && temp[j] != '\0')
		str[i++] = temp[j++];
	str[i] = '\0';
	free(buffer);
	return (str);
}
