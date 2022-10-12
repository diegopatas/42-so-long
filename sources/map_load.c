/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:55:41 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 18:28:30 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	char	*map_buffer_normalize(char *string_target)
{
	char	*string_result;

	string_result = ft_strtrim(string_target, "\n");
	free(string_target);
	return (string_result);
}

static	int	map_lines_count(char *map_argv)
{
	char	*aux;
	int		fd;
	int		lines;

	aux = " ";
	lines = 0;
	fd = open(map_argv, O_RDONLY);
	while (aux)
	{
		aux = get_next_line(fd);
		free(aux);
		lines++;
	}
	close (fd);
	return (lines);
}

char	**map_load(char *map_argv)
{
	char	**map_aux;
	int		fd;
	int		lines;

	lines = map_lines_count(map_argv);
	map_aux = (char **)malloc(lines * sizeof (char **));
	if (!map_aux)
	{
		free(map_aux);
		map_aux = NULL;
		return (map_aux);
	}
	lines = 0;
	fd = open(map_argv, O_RDONLY);
	while (1)
	{
		map_aux[lines] = get_next_line(fd);
		if (map_aux[lines] == NULL)
			break ;
		map_aux[lines] = map_buffer_normalize(map_aux[lines]);
		lines++;
	}
	close (fd);
	return (map_aux);
}
