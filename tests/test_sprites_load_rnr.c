/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_sprites_load.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:26:08 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/23 08:29:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <test_so_long.h>

TEST_GROUP_RUNNER(sprites_load)
{
	RUN_TEST_CASE(sprites_load, load_images);
}
