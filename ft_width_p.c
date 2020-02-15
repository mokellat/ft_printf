/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:29:45 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 05:02:43 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_final(t_flagcheck flags, int k, unsigned long p, int j)
{
	k = flags.width * -1;
	ft_print_help_p(p, k, flags, j);
}

void	ft_width_p(va_list ap, t_flagcheck flags, unsigned long p)
{
	int j;
	int k;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	ft_s_check(j, flags);
	k = flags.width;
	if ((flags.width != 0 && flags.precision == 0) || (flags.precision < j))
	{
		(k < 0) ? (k *= -1) : k;
		ft_print_help_p(p, k, flags, j);
	}
	else if ((flags.precision >= flags.width && flags.precision > 0))
		ft_print_help_p(p, flags.precision, flags, j);
	else if (flags.precision < flags.width && flags.precision > 0)
	{
		(k = flags.width - flags.precision);
		ft_print_help_p(p, k, flags, j);
	}
	else if (flags.width < 0 && flags.width * -1 > flags.precision)
	{
		(k = (flags.width * -1) - flags.precision);
		ft_print_help_p(p, k, flags, j);
	}
	else if (flags.precision < 0)
		ft_final(flags, k, p, j);
}
