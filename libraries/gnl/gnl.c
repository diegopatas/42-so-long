/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:42:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/05/13 18:00:48 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE];
	static size_t	scan;
	static size_t	start;
	char			*line;
	char			*aux;
	ssize_t			n_read;

	line = "";
	if (scan == 0 || scan >= BUFFER_SIZE)
	{
		n_read = read(fd, buff, BUFFER_SIZE);
		if (n_read == 0 || n_read == -1)
			return (NULL);
		scan = 0;
	}
	start = scan;
	while (scan < BUFFER_SIZE)
	{
		if (buff[scan] == '\n')
		{
			aux = (char *)malloc((scan - start + 2) * sizeof(char));
			ft_strlcpy(aux, &buff[start], (scan - start + 1));
			line = ft_strjoin(line, aux);
			free(aux);
			aux = NULL;
			break ;
		}
		else if (scan == BUFFER_SIZE - 1)
		{
			aux = (char *)malloc((scan - start + 2) * sizeof(char));
			ft_strlcpy(aux, &buff[start], (scan - start + 1));
			line = ft_strjoin(line, aux);
			free(aux);
			aux = NULL;
			if (read(fd, buff, BUFFER_SIZE) == 0)
				break ;
			scan = 0;
		}
		else
			scan++;
	}
	scan++;
	return (line);
}
