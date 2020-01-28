/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:08:48 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/26 21:03:32 by mokellat         ###   ########.fr       */
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

	p = va_arg(ap, int);
	va_start(ap, ptr);
	while (ptr[i])
	{
		if(ptr[i] == '%')
		{
			i++;
			find_conversion(ptr, ap);
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