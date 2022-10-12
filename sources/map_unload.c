/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_unload.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:51:43 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/07 23:52:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	map_unload(char **map_target)
{
	int	i;

	i = 0;
	while (map_target[i])
	{
		free(map_target[i]);
		i++;
	}
	free(map_target);
	return (0);
}
