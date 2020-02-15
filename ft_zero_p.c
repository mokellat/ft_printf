/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 08:32:46 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:19:09 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_zero_p(t_flagcheck flags, unsigned long p)
{
	int j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if ((flags.numbers > j))
	{
		g_s = 2;
		ft_print_help_p(p, flags.numbers, flags, j);
	}
	else if (flags.width > j)
	{
		g_s = 2;
		ft_print_help_p(p, flags.width, flags, j);
	}
	else
	{
		if (flags.numbers != 0)
			ft_numbers_p(flags, p);
		else if (flags.width != 0)
			ft_width_p(flags, p);
		else if (flags.precision != 0)
			ft_precision_p(flags, p);
		else if (j != 0)
			ft_putstr(ft_itoa_hexa_p(p, flags));
	}
}
