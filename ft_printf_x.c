/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 09:55:57 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/31 15:42:14 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_printf_x(const char *ptr, va_list ap)
{
    unsigned int    p;
	flagcheck       flags;
	int             j;
    
	flags = ft_printf_flag_check(ptr, ap);
	p = va_arg(ap, unsigned int);
	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && t == 1) ? 0 : j;
	if(flags.negative == 1)
		ft_negative_x(ap,flags,p);
	else if(flags.zero == 1)
		ft_zero_x(ap, flags, p);
	else if(flags.numbers > j)
		ft_numbers_x(ap, flags, p);
	else if (flags.width != 0)
		ft_width_x(ap, flags, p);
	else if(flags.precision > j)
    	ft_precision_x(ap, flags, p);
	else
		if(j != 0)
			ft_hexa_x(p);
}