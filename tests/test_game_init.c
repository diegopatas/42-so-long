/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_game_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:21:20 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/27 23:51:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <mlx.h>

TEST_GROUP(game_init);

static t_game	game;

TEST_SETUP(game_init)
{
	game_init(&game);
}

TEST_TEAR_DOWN(game_init)
{
}

TEST(game_init, mlx_connection)
{
	TEST_ASSERT_EQUAL(0, game_init(&game));
	TEST_ASSERT_NOT_NULL(game.mlx);
	TEST_ASSERT_NOT_NULL(game.win);
}

TEST(game_init, img_param)
{
	TEST_ASSERT_EQUAL(0, game.img_width);
	TEST_ASSERT_EQUAL(0, game.img_height);
}
