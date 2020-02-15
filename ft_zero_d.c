/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:47:16 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:19:00 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_zero_d(t_flagcheck flags, int p)
{
	int j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if ((flags.numbers > j) && flags.precision == 0 && g_t == 0)
	{
		g_s = 2;
		ft_print_help(p, flags.numbers, flags, j);
	}
	else if (flags.width > j && flags.precision < 0 && g_t == 0)
	{
		g_s = 2;
		ft_print_help(p, flags.width, flags, j);
	}
	else
	{
		if (flags.numbers != 0)
			ft_numbers_d(flags, p);
		else if (flags.width != 0)
			ft_width_d(flags, p);
		else if (flags.precision != 0)
			ft_precision_d(flags, p);
		else if (j != 0)
			ft_putnbr(p);
	}
}
