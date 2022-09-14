/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:42:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/05/13 21:48:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	char		*aux;
	ssize_t		n_read;

	line = NULL;
	n_read = -1;
	while (!ft_strchr(line, '\n') && n_read != 0)
	{
		aux = ft_strchr(buff, '\n');
		if (aux++)
		{
			new_str(&line, buff, aux - buff);
			ft_strlcpy(buff, aux, ft_strlen(aux) + 1);
			continue ;
		}
		new_str(&line, buff, ft_strlen(buff));
		n_read = read(fd, buff, BUFFER_SIZE);
		if (n_read < 0)
			return (NULL);
		buff[n_read] = '\0';
	}
	return (line);
}
