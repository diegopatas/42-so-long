/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_unload.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:06:40 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 16:46:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static	void	sprites_unload_var(void *mlx, void *sprite)
{
	mlx_destroy_image(mlx, sprite);
	sprite = NULL;
	return ;
}

int	sprites_unload(t_game *game)
{
	sprites_unload_var(game->mlx, game->player);
	sprites_unload_var(game->mlx, game->wall);
	sprites_unload_var(game->mlx, game->collect);
	sprites_unload_var(game->mlx, game->empty);
	sprites_unload_var(game->mlx, game->wayout);
	if (game->player != NULL
		|| game->wall != NULL
		|| game->collect != NULL
		|| game->empty != NULL
		|| game->wayout != NULL)
		return (1);
	return (EXIT_SUCCESS);
}
