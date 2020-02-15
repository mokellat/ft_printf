/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:20:29 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 08:27:02 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_num_intern_u(unsigned int p, t_flagcheck flags, int j)
{
	int k;

	(k = flags.numbers - flags.precision);
	ft_print_help_u(p, k, flags, j);
}

void	ft_numbers_u(t_flagcheck flags, unsigned int p)
{
	int j;

	j = ft_strlen(ft_itoa_p(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	ft_s_check(j, flags);
	if ((flags.numbers > j && flags.precision == 0) || (flags.precision < j))
		ft_print_help_u(p, flags.numbers, flags, j);
	else if (flags.precision >= flags.numbers)
	{
		ft_print_help_u(p, flags.precision, flags, j);
	}
	else if (flags.numbers > flags.precision && flags.precision > 0)
		ft_num_intern_u(p, flags, j);
	else if (flags.precision < 0)
	{
		flags.precision *= -1;
		ft_print_help_u(p, flags.precision, flags, j);
	}
	else if (j != 0)
		ft_putnbr_p(p);
}
