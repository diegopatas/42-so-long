/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leddriver_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:33:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/20 18:46:27 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unity.h>
#include <unity_fixture.h>

TEST_GROUP(leddriver);

TEST_SETUP(leddriver)
{
}

TEST_TEAR_DOWN(leddriver)
{
}

TEST(leddriver, leds_off)
{
	TEST_FAIL_MESSAGE("Start Here!");
}

