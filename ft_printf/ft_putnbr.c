/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:10:30 by obektas           #+#    #+#             */
/*   Updated: 2022/11/20 19:26:37 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(long c)
{
	int	len;

	len = 0;
	if (c == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (c < 0)
	{
		c *= -1;
		len += ft_putchar('-');
	}
	if (c > 9)
	{
		len += ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
	{
		c = c + 48;
		ft_putchar(c);
	}
	len++;
	return (len);
}
