/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sprites_unload.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:48:39 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/28 17:32:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <mlx.h>

TEST_GROUP(sprites_unload);

static t_game game;

TEST_SETUP(sprites_unload)
{
	game_init(&game);
	sprites_load(&game);
// 	sprites_unload(&game);
}

TEST_TEAR_DOWN(sprites_unload)
{
	
}

TEST(sprites_unload, check_null)
{
	TEST_ASSERT_NULL(game.img_player);
}
