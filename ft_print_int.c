/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaillie <rcaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:57:08 by rcaillie          #+#    #+#             */
/*   Updated: 2024/10/18 08:10:57 by rcaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int		ret;
	char	*str;

	ret = 0;
	str = ft_itoa(n);
	if (str)
	{
		ret = write(1, str, ft_strlen(str));
		free(str);
	}
	else
		return (-1);
	return (ret);
}
