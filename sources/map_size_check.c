/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:45:59 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/11 23:24:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	map_size_check(int line_length, int line_number)
{
	int	size_is_valid;

	size_is_valid = 1;
	if (line_length < 5 && line_number < 3)
		size_is_valid = 0;
	else if (line_number < 5 && line_length < 3)
		size_is_valid = 0;
	else if (line_length > MAP_MAX_SIZE || line_number > MAP_MAX_SIZE)
		size_is_valid = 0;
	if (!size_is_valid)
	{
		log_message("Map size is invalid!", ERROR);
		return (size_is_valid);
	}
	log_message("Map size ok!", LOG);
	return (size_is_valid);
}
