/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leddriver_runner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:43:08 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/20 18:54:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unity.h>
#include <unity_fixture.h>

TEST_GROUP_RUNNER(leddriver)
{
	RUN_TEST_CASE(leddriver, leds_off);
}
