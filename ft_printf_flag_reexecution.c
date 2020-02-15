/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag_reexecution.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:11:11 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:41:10 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_flag_reexecution(va_list ap, t_flagcheck flags)
{
	int p;
	int j;

	p = va_arg(ap, int);
	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (p < 0)
		j--;
	if (flags.negative == 1)
		ft_negative_d(flags, p);
	else if (flags.zero == 1)
		ft_zero_d(flags, p);
	else if (flags.numbers > j)
		ft_numbers_d(flags, p);
	else if (flags.width != 0)
		ft_width_d(flags, p);
	else if (flags.precision > j)
		ft_precision_d(flags, p);
	else
	{
		if (j != 0)
			ft_putnbr(p);
	}
}
