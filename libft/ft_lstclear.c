/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:19:50 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 13:26:08 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aft;

	if (!lst || !del)
		return ;
	aux = *lst;
	while (aux)
	{
		aft = aux->next;
		del(aux->content);
		free(aux);
		aux = aft;
	}
	*lst = 0;
}
