/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaillie <rcaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:03:36 by rcaillie          #+#    #+#             */
/*   Updated: 2024/10/18 15:02:00 by rcaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef unsigned long int	t_uintptr;

int		ft_print_arg(char c, va_list args);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *str);
char	*to_upper(char *s);
char	*ft_strrev(char *str);
int		ft_numlen_base(t_uintptr nbr, int base);
char	*ft_itoa_base(t_uintptr nbr, int base, int is_upper);
char	*ft_itoa(int n);
char	*ft_hex(unsigned int n, int upper);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_pointer(t_uintptr address);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n, int upper);
char	*ft_hexa(unsigned int n, int upper);
int		ft_print_arg(char c, va_list args);

#endif
