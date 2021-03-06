/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:08:48 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/18 13:23:17 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	back_to_zero(void)
{
	int replace;

	replace = g_back;
	g_back = 0;
	return (replace);
}

int	ft_printf(const char *ptr, ...)
{
	va_list		ap;

	g_i = 0;
	va_start(ap, ptr);
	while (ptr[g_i])
	{
		if (ptr[g_i] == '%')
		{
			g_i++;
			find_conversion(ptr, ap);
		}
		else
		{
			ft_putchar(ptr[g_i]);
			g_i++;
		}
	}
	va_end(ap);
	return (back_to_zero());
}
