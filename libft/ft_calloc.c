/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:09:47 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 14:38:24 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	max_space;

	max_space = nelem * elsize;
	if (nelem != 0 && (max_space / nelem) != elsize)
		return (0);
	ptr = malloc(nelem * elsize);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
