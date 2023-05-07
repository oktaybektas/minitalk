/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:10:23 by obektas           #+#    #+#             */
/*   Updated: 2022/11/20 19:50:49 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* unsigned long 0 .. 4,294,967,295 */

#include "ft_printf.h"

int	ft_puthex(unsigned long c, char data, int t)
{
	char	*set;
	int		i;

	i = 0;
	if (data == 'X')
		set = "0123456789ABCDEF";
	else
		set = "0123456789abcdef";
	if (data == 'p')
	{
		if (t == 1)
			i += ft_putstr("0x");
		if (c / 16 > 0)
			i += ft_puthex(c / 16, data, 0);
	}
	else
	{
		if ((unsigned int)c / 16 > 0)
			i += ft_puthex((unsigned int)c / 16, data, 0);
	}
	ft_putchar(set[c % 16]);
	i++;
	return (i);
}
