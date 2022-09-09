/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:21:36 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 23:33:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void		*save_s1;
	void		*fin_s1;
	const void	*fin_s2;

	save_s1 = s1;
	if ((s2 < s1) && (s1 < s2 + n))
	{
		while (n--)
		{
			fin_s1 = s1 + n;
			fin_s2 = s2 + n;
			*(char *)fin_s1 = *(char *)fin_s2;
		}
	}
	else
		return (ft_memcpy(s1, s2, n));
	return (save_s1);
}
