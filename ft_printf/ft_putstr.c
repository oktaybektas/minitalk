/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:10:35 by obektas           #+#    #+#             */
/*   Updated: 2022/11/20 19:27:32 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putstr(char *c)
{
	int	len;

	len = 0;
	if (c)
		while (c[len])
			len += ft_putchar(c[len]);
	else
		len += ft_putstr("(null)");
	return (len);
}
