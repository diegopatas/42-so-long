/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:14:50 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/24 22:44:34 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len_s;
	unsigned int	index;
	char			*str_return;

	index = 0;
	len_s = ft_strlen(s);
	str_return = (char *)malloc((len_s + 1) * sizeof(char));
	if (!str_return)
		return (0);
	while (index < len_s)
	{
		str_return[index] = f(index, s[index]);
		index++;
	}
	str_return[index] = '\0';
	return (str_return);
}
