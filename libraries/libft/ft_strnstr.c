/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:59:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 12:11:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (*src == '\0')
		return ((char *)dst);
	if (len_src > len_dst)
		return (0);
	while (*dst && n > 0)
	{
		if (*src == *dst)
		{
			if (ft_strncmp(dst, src, len_src) == 0 && len_src <= n)
				return ((char *)dst);
		}
		dst++;
		n--;
	}
	return (0);
}
