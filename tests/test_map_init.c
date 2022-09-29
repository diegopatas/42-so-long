/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:09:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/28 18:22:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <mlx.h>

TEST_GROUP(map_init);

static t_game game;

TEST_SETUP(map_init)
{
	map_init(&game);
}

TEST_TEAR_DOWN(map_init)
{
	
}

TEST(map_init, check_init)
{
	TEST_ASSERT_EQUAL(1, game.map[0][0]);
	TEST_ASSERT_EQUAL(1, game.map[0][1]);
	TEST_ASSERT_EQUAL(1, game.map[0][2]);
	TEST_ASSERT_EQUAL(1, game.map[1][0]);
	TEST_ASSERT_EQUAL(2, game.map[1][1]);
	TEST_ASSERT_EQUAL(1, game.map[1][2]);
	TEST_ASSERT_EQUAL(1, game.map[2][0]);
	TEST_ASSERT_EQUAL(3, game.map[2][1]);
	TEST_ASSERT_EQUAL(1, game.map[2][2]);
	TEST_ASSERT_EQUAL(1, game.map[3][0]);
	TEST_ASSERT_EQUAL(4, game.map[3][1]);
	TEST_ASSERT_EQUAL(1, game.map[3][2]);
	TEST_ASSERT_EQUAL(1, game.map[4][0]);
	TEST_ASSERT_EQUAL(1, game.map[4][1]);
	TEST_ASSERT_EQUAL(1, game.map[4][2]);
}
