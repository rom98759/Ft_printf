/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaillie <rcaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:56:43 by rcaillie          #+#    #+#             */
/*   Updated: 2024/10/18 15:01:52 by rcaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(t_uintptr address)
{
	char	*str;
	int		len;

	if (address == 0)
		return (ft_print_string("(nil)"));
	str = ft_itoa_base(address, 16, 0);
	if (!str)
		return (-1);
	len = ft_print_string("0x");
	len += ft_print_string(str);
	free(str);
	return (len);
}
