/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sprites_load.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:01:47 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/23 21:35:26 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <stdlib.h>
#include <mlx.h>

TEST_GROUP(sprites_load);

static t_game	game;

TEST_SETUP(sprites_load)
{
	game_init(&game);
	sprites_load(&game);
}

TEST_TEAR_DOWN(sprites_load)
{
}

TEST(sprites_load, load_images)
{
// 	game.img_player = NULL;
// 	game.img_collect = NULL;
// 	game.img_wall = NULL;
// 	game.img_exit = NULL;
// 	game.img_empty = NULL;
	TEST_ASSERT_NULL(game.img_player);
	TEST_ASSERT_NULL(game.img_collect);
	TEST_ASSERT_NULL(game.img_wall);
	TEST_ASSERT_NULL(game.img_exit);
	TEST_ASSERT_NULL(game.img_empty);
}
