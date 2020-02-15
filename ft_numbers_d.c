/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:49:53 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:48:58 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_num_intern(int p, t_flagcheck flags, int j)
{
	int k;

	(p < 0) ? (k = flags.numbers - flags.precision - 1) :
		(k = flags.numbers - flags.precision);
	(p < 0) ? (j--) : j;
	ft_print_help(p, k, flags, j);
}

void	ft_numbers_d(va_list ap, t_flagcheck flags, int p)
{
	int k;
	int j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	ft_s_check(j, flags);
	if ((flags.numbers > j && flags.precision == 0) || (flags.precision < j))
		ft_print_help(p, flags.numbers, flags, j);
	else if (flags.precision >= flags.numbers)
	{
		(p < 0) ? (j--) : j;
		ft_print_help(p, flags.precision, flags, j);
	}
	else if (flags.numbers > flags.precision && flags.precision > 0)
		ft_num_intern(p, flags, j);
	else if (flags.precision < 0)
	{
		flags.precision *= -1;
		ft_print_help(p, flags.precision, flags, j);
	}
	else if (j != 0)
		ft_putnbr(p);
}
