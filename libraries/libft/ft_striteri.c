/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:15:36 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/26 16:03:53 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index_s;
	size_t			len_s;

	len_s = ft_strlen(s);
	index_s = 0;
	while (index_s < len_s)
	{
		f(index_s, s + index_s);
		index_s++;
	}
}
