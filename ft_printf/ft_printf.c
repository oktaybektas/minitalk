/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:54:25 by obektas           #+#    #+#             */
/*   Updated: 2022/11/26 18:29:59 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Arguman gösterici macrolar diye adlandırılır
	Bir fonksiyonun sınırsız arguman alması için kullanılır
	Va_list struct veri tipi
	Variadic foksiyonlar c diline gömülü fonsiyonlar */

#include "ft_printf.h"

int	ft_choose(const char *data, va_list arg, int *i)
{
	if (data[*i] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (data[*i] == 'd' || data[*i] == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (data[*i] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (data[*i] == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int)));
	else if (data[*i] == 'x' || data[*i] == 'X' || data[*i] == 'p')
		return (ft_puthex(va_arg(arg, unsigned long), data[*i], 1));
	else if (data[*i] == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *data, ...)
{
	va_list	arg;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start (arg, data);
	while (data[i])
	{
		if (data[i] == '%')
		{
			i++;
			if (data[i])
			{
				len += ft_choose(data, arg, &i);
				i++;
			}
		}
		else
			len += ft_putchar (data[i++]);
	}
	va_end(arg);
	return (len);
}
