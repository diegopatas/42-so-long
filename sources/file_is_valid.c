/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:23:52 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/13 19:21:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	file_is_valid(char *file)
{
	char	*ext_target;

	ext_target = ft_strrchr(file, '.');
	if (open(file, O_CLOEXEC) == -1)
		return (log_message ("map's file can't be open!", ERROR));
	if (!ext_target)
		return (log_message("missing extention of type '.ber'!", ERROR));
	ft_printf("Log: file's extention is '%s'.\n", ext_target);
	if (ft_strncmp(ext_target, ".ber", 5) == 0)
		return (log_message("map's file type is valid!", LOG));
	return (log_message ("map's file is invalid!", ERROR));
}
