/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:08:48 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/29 23:54:53 by mokellat         ###   ########.fr       */
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
int	ft_printfs(const char *ptr, ...)
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
			ft_printf_c(ptr, ap);
		}
		else 
		{
			ft_putchar(ptr[i]);
			i++;
			back++;
		}
	}
	va_end(ap);
	return (back_to_zero(ap));
}