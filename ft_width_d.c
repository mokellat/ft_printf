/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:34:19 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 04:56:31 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_jouj(int p, t_flagcheck flags, int j, int k)
{
	if ((flags.precision >= flags.width && flags.precision > 0))
	{
		(p < 0) ? (j--) : j;
		ft_print_help(p, flags.precision, flags, j);
	}
	else if (flags.precision < flags.width && flags.precision > 0)
	{
		(p < 0) ? (k = flags.width - flags.precision - 1) :
			(k = flags.width - flags.precision);
		(p < 0) ? (j--) : j;
		ft_print_help(p, k, flags, j);
	}
	else if (flags.width < 0 && flags.width * -1 > flags.precision)
	{
		(p < 0) ? (k = (flags.width * -1) - flags.precision - 1) :
			(k = (flags.width * -1) - flags.precision);
		(p < 0) ? (j--) : j;
		ft_print_help(p, k, flags, j);
	}
}

void	ft_width_d(va_list ap, t_flagcheck flags, int p)
{
	int j;
	int k;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	ft_s_check(j, flags);
	k = flags.width;
	if ((flags.width != 0 && flags.precision == 0) || (flags.precision < j))
	{
		(k < 0) ? (k *= -1) : k;
		ft_print_help(p, k, flags, j);
	}
	else if (flags.precision < 0)
	{
		k = flags.width * -1;
		ft_print_help(p, k, flags, j);
	}
	else
		ft_jouj(p, flags, j, k);
}
