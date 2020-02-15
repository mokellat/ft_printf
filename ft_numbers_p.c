/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:04:54 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 21:01:26 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_num_intern_p(unsigned long p, t_flagcheck flags, int j)
{
	int k;

	(k = flags.numbers - flags.precision);
	ft_print_help_p(p, k, flags, j);
}

void	ft_numbers_p(va_list ap, t_flagcheck flags, unsigned long p)
{
	int k;
	int j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	ft_s_check(j, flags);
	if ((flags.numbers > j && flags.precision == 0) || (flags.precision < j))
		ft_print_help_p(p, flags.numbers, flags, j);
	else if (flags.precision >= flags.numbers)
	{
		ft_print_help_p(p, flags.precision, flags, j);
	}
	else if (flags.numbers > flags.precision && flags.precision > 0)
		ft_num_intern_p(p, flags, j);
	else if (flags.precision < 0)
	{
		flags.precision *= -1;
		ft_print_help_p(p, flags.precision, flags, j);
	}
	else if (j != 0)
		ft_putstr(ft_itoa_hexa_p(p, flags));
}
