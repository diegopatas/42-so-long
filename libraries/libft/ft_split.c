/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:54:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 13:27:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_words(const char *s, char c)
{
	size_t			n_wrd;
	size_t			i;
	unsigned int	flag;

	n_wrd = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			n_wrd++;
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (n_wrd);
}

static char	**ft_make_arr(char **array_str, size_t n_wrd, char const *s, char c)
{
	size_t			index_wrd;
	size_t			start_wrd;
	size_t			index_s;
	unsigned int	flag;

	index_wrd = 0;
	index_s = 0;
	flag = 0;
	while (index_wrd < n_wrd)
	{
		if (s[index_s] != c && flag == 0)
		{
			start_wrd = index_s;
			flag = 1;
		}
		if (s[index_s] == '\0' || (s[index_s] == c && flag == 1))
		{
			array_str[index_wrd] = ft_substr(s, start_wrd, index_s - start_wrd);
			flag = 0;
			index_wrd++;
		}
		index_s++;
	}
	return (array_str);
}

char	**ft_split(char const *s, char c)
{
	char			**array_str;
	size_t			n_wrd;

	if (!s)
		return (NULL);
	n_wrd = ft_n_words(s, c);
	array_str = (char **) ft_calloc(n_wrd + 1, sizeof(char *));
	if (!array_str)
		return (NULL);
	ft_make_arr(array_str, n_wrd, s, c);
	return (array_str);
}
