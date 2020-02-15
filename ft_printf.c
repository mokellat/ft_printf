/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:08:48 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 23:01:01 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	back_to_zero(va_list ap)
{
	int replace;

	replace = g_back;
	g_back = 0;
	return (replace);
}

int	ft_printf(const char *ptr, ...)
{
	va_list		ap;
	int			p;
	t_flagcheck	flags;

	va_start(ap, ptr);
	while (ptr[g_i])
	{
		if (ptr[g_i] == '%')
		{
			g_i++;
			find_conversion(ptr, ap, flags);
		}
		else
		{
			ft_putchar(ptr[g_i]);
			g_i++;
		}
	}
	va_end(ap);
	return (back_to_zero(ap));
}
