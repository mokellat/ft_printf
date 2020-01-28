/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 01:32:19 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/26 20:18:41 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *ptr, ...)
{
	va_list		ap;

	va_start(ap, ptr);
	while (ptr[i])
	{
		if(ptr[i] == '%')
		{
			i++;
			ft_printf_flag_reexecution(ptr, ap);
		}
		else 
		{
			ft_putchar(ptr[i]);
			i++;
		}
	}
	va_end(ap);
	return (i);
}
