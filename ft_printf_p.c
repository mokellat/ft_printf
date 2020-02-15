/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 09:45:21 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:25:06 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_p(va_list ap, t_flagcheck flags)
{
	unsigned long	p;
	int				j;

	p = va_arg(ap, unsigned long);
	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if (flags.negative == 1)
		ft_negative_p(flags, p);
	else if (flags.zero == 1)
		ft_zero_p(flags, p);
	else if (flags.numbers > j)
		ft_numbers_p(flags, p);
	else if (flags.width != 0)
		ft_width_p(flags, p);
	else if (flags.precision > j)
		ft_precision_p(flags, p);
	else
		ft_putstr(ft_itoa_hexa_p(p, flags));
}
