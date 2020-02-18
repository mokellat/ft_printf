/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:22:24 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/18 13:25:54 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_extra_final_u(t_flagcheck flags, unsigned int p, int k, int j)
{
	if (flags.width < 0 && flags.width * -1 > flags.precision)
	{
		(k = (flags.width * -1) - flags.precision);
		ft_print_help_u(p, k, flags, j);
	}
	else if (flags.width < 0 && flags.precision > 0)
	{
		g_s = 2;
		ft_print_help_u(p, flags.precision, flags, j);
	}
	else
	{
		if (j != 0)
			ft_putnbr(p);
	}
}

void	ft_super(unsigned int p, int k, t_flagcheck flags, int j)
{
	if (flags.width < 0 && flags.width * -1 > flags.precision)
	{
		(k = (k * -1) - flags.precision);
		ft_print_help_u(p, k, flags, j);
	}
	else if (flags.precision < 0)
	{
		k = flags.width * -1;
		ft_print_help_u(p, k, flags, j);
	}
	else
		ft_extra_final_u(flags, p, k, j);
}

void	ft_width_u(t_flagcheck flags, unsigned int p)
{
	int j;
	int k;

	j = ft_strlen(ft_itoa_p(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	ft_s_check(j, flags);
	k = flags.width;
	if ((flags.width != 0 && flags.precision == 0) || (flags.precision < j))
	{
		(k < 0) ? (k *= -1) : k;
		ft_print_help_u(p, k, flags, j);
	}
	else if ((flags.precision >= flags.width && flags.precision > 0 &&
				flags.width > 0))
	{
		ft_print_help_u(p, flags.precision, flags, j);
	}
	else if (flags.precision < flags.width && flags.precision > 0)
	{
		(k = flags.width - flags.precision);
		ft_print_help_u(p, k, flags, j);
	}
	else
		ft_super(p, k, flags, j);
}
