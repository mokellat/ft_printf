/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 09:45:21 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/10 16:31:52 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_printf_p(const char *ptr, va_list ap, flagcheck flags)
{
    unsigned long   p;
    int             j;
    
	p = va_arg(ap, unsigned long);
	j = ft_strlen(ft_itoa_hexa_p(p , flags));
	j = (p == 0 && t == 1) ? 0 : j;
	if(flags.negative == 1)
		ft_negative_p(ap,flags,p);
	else if(flags.zero == 1)
		ft_zero_p(ap, flags, p);
	else if(flags.numbers > j)
		ft_numbers_p(ap, flags, p);
	else if (flags.width != 0)
		ft_width_p(ap, flags, p);
	else if(flags.precision > j)
    	ft_precision_p(ap, flags, p);
	else
		if(j != 0)
			ft_putstr(ft_itoa_hexa_p(p, flags));
}