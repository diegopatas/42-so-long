/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:27:31 by ddiniz            #+#    #+#             */
/*   Updated: 2022/05/13 21:50:40 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str && *str++)
		len++;
	return (len);
}

char	*ft_strchr(const char *str, char c)
{
	if (str != NULL)
	{
		while (*str && *str != c)
			str++;
		if (*str == c)
			return ((char *)str);
	}
	return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size--)
	{
		while (size-- && *src)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (len_src);
}

void	new_str(char **line, const char *buffer, size_t size)
{
	char	*aux;
	size_t	len_line;

	aux = NULL;
	if (buffer[0])
	{
		len_line = ft_strlen(*line);
		aux = (char *)malloc((len_line + size + 1) * sizeof(char));
		if (aux != NULL)
		{
			ft_strlcpy(aux, *line, len_line + 1);
			ft_strlcpy(aux + len_line, buffer, size + 1);
		}
	}
	free(*line);
	*line = aux;
}
