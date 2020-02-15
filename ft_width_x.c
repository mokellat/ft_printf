/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:52:40 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 07:20:35 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_extra(t_flagcheck flags, unsigned int p, int k, int j)
{
	if (flags.width < 0 && flags.width * -1 > flags.precision)
	{
		(k = (flags.width * -1) - flags.precision);
		ft_print_help_x(p, k, flags, j);
	}
	else if (flags.precision < 0)
	{
		k = flags.width * -1;
		ft_print_help_x(p, k, flags, j);
	}
}

void	ft_width_x(va_list ap, t_flagcheck flags, unsigned int p)
{
	int j;
	int k;

	j = ft_strlen(ft_itoa_hexa(p, flags));
	j = (p == 0 && g_t == 1) ? 0 : j;
	ft_s_check(j, flags);
	k = flags.width;
	if ((flags.width != 0 && flags.precision == 0) || (flags.precision < j))
	{
		(k < 0) ? (k *= -1) : k;
		ft_print_help_x(p, k, flags, j);
	}
	else if ((flags.precision >= flags.width && flags.precision > 0))
		ft_print_help_x(p, flags.precision, flags, j);
	else if (flags.precision < flags.width && flags.precision > 0)
	{
		(k = flags.width - flags.precision);
		ft_print_help_x(p, k, flags, j);
	}
	else
		ft_extra(flags, p, k, j);
}
