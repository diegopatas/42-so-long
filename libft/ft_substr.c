/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:09:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 15:53:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*sub_str;

	len_s = ft_strlen(s);
	if (!s)
		return (0);
	if (len_s <= start)
	{
		sub_str = (char *)malloc(1);
		sub_str[0] = '\0';
		return (sub_str);
	}
	else if (len <= len_s - start)
		sub_str = (char *)malloc((len + 1) * sizeof(char));
	else
		sub_str = (char *)malloc((len_s - start + 1) * sizeof(char));
	if (!sub_str)
		return (0);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
