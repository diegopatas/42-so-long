/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:10:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 20:26:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joint;
	char	*save_str;
	size_t	size_total;

	size_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str_joint = (char *)malloc(size_total * sizeof(char));
	if (!str_joint)
		return (0);
	save_str = str_joint;
	while (*s1)
	{
		*str_joint = *s1;
		s1++;
		str_joint++;
	}
	while (*s2)
	{
		*str_joint = *s2;
		s2++;
		str_joint++;
	}
	*str_joint = '\0';
	return (save_str);
}
