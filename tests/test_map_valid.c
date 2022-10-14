/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:20:39 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/23 22:33:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>
#include <mlx.h>

TEST_GROUP(map_valid);

// # define COLS 5
// # define ROWS 5

static char	*map = "test";

TEST_SETUP(map_valid)
{

}

TEST_TEAR_DOWN(map_valid)
{

}

TEST(map_valid, init)
{
	TEST_ASSERT_EQUAL(0, map_valid(map));
}
