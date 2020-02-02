/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:08:48 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 21:54:38 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	back_to_zero(va_list ap)
{
	int replace; 

	replace = back;
	back = 0;
	return (replace);
}
int	ft_printf(const char *ptr, ...)
{
	va_list		ap;
	int			p;
	flagcheck	flags;
	
	va_start(ap, ptr);
	while (ptr[i])
	{
		if(ptr[i] == '%')
		{
			i++;
			find_conversion(ptr, ap, flags);
		}
		else 
		{
			ft_putchar(ptr[i]);
			i++;
		}
	}
	va_end(ap);
	return (back_to_zero(ap));
}