/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:45:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/09/20 19:07:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unity.h>
#include <unity_fixture.h>

void	run_all_tests(void)
{
	RUN_TEST_GROUP(leddriver);
}

int	main(int argc, const char *argv[])
{
	return UnityMain(argc, argv, run_all_tests);
}
