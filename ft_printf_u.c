/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 21:55:26 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:25:17 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_u(va_list ap, t_flagcheck flags)
{
	unsigned int	p;
	int				j;

	p = va_arg(ap, unsigned int);
	j = ft_strlen(ft_itoa_p(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (flags.negative == 1)
		ft_negative_u(flags, p);
	else if (flags.zero == 1)
		ft_zero_u(flags, p);
	else if (flags.numbers > j)
		ft_numbers_u(flags, p);
	else if (flags.width != 0)
		ft_width_u(flags, p);
	else if (flags.precision > j)
		ft_precision_u(flags, p);
	else
	{
		if (j != 0)
			ft_putnbr_p(p);
	}
}
