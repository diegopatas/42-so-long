/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:32:15 by ddiniz            #+#    #+#             */
/*   Updated: 2022/10/06 21:05:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1024

size_t	ft_strlen_gnl(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_gnl_strchr(const char *str, char c);
char	*get_next_line(int fd);
void	new_str(char **line, const char *buffer, size_t size);

#endif
