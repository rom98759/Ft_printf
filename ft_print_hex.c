/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaillie <rcaillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:58:29 by rcaillie          #+#    #+#             */
/*   Updated: 2024/10/18 08:19:38 by rcaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hexa(unsigned int n, int upper)
{
	char	*hex;
	int		count;
	char	*str;

	count = 0;
	if (upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	str = malloc(ft_numlen_base(n, 16) + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[count++] = '0';
	while (n != 0)
	{
		str[count] = hex[n % 16];
		count++;
		n /= 16;
	}
	str[count] = '\0';
	ft_strrev(str);
	return (str);
}

int	ft_print_hex(unsigned int n, int upper)
{
	char	*str;
	int		ret;

	str = ft_hexa(n, upper);
	if (str == NULL)
		return (-1);
	ret = write(1, str, ft_strlen(str));
	free(str);
	return (ret);
}
