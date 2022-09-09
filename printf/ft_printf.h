/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:55:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/06/11 17:31:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define BASE_HEX_UPP "0123456789ABCDEF"
# define BASE_HEX_LOW "0123456789abcdef"
# define BASE_DEC "0123456789"
# define UPPER 1
# define LOWER 0
# define SIGNED_INT 1
# define UNSIGNED_INT 0

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_itoag(long long int n, int sign, char *base);
int		print_char(char c);
int		print_nbr(long int n, int sign);
int		print_hex(unsigned int n, int casetype);
int		print_base(long long int n, int sign, char *base);
int		print_ptr(void *ptr);
int		print_str(const char *str);

int		ft_printf(const char *str, ...);
int		check_char(char c, va_list args);
#endif
