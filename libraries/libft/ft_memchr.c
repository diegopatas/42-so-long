/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:57:08 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/28 19:13:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while ((unsigned char *)s && (n > 0))
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
		n--;
	}
	return (0);
}
