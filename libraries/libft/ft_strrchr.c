/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:39:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/28 19:11:18 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)(s + len + 1));
	while (len >= 0)
	{
		if (*(s + len) == (char )c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (0);
}
