/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaillie <rcaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:58:00 by rcaillie          #+#    #+#             */
/*   Updated: 2024/10/18 08:19:07 by rcaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_itoa_base((unsigned long)n, 10, 0);
	if (!str)
		return (-1);
	len = ft_print_string(str);
	free(str);
	return (len);
}
