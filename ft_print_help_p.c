/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:43:13 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 00:23:35 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_inter_one(t_flagcheck flags, int replace, int up, unsigned long p)
{
	int	j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if (flags.width < 0 || (flags.width < 0 && flags.precision < 0)
			|| flags.negative == 1)
	{
		if (j != 0)
			ft_putstr(ft_itoa_hexa_p(p, flags));
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		ft_putstr(ft_itoa_hexa_p(p, flags));
	}
}

void	ft_inter_three(int replace, int up, t_flagcheck flags, unsigned long p)
{
	int	replace1;

	replace1 = flags.precision;
	if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1))
	{
		(flags.width < 0) ? (flags.width *= -1) : (flags.width);
		while (replace1-- > up)
			ft_putchar('0');
		ft_putstr(ft_itoa_hexa_p(p, flags));
		while (replace-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > 0)
			ft_putchar(' ');
		while (replace1-- > up)
			ft_putchar('0');
		ft_putstr(ft_itoa_hexa_p(p, flags));
	}
}

void	ft_print_help_p(unsigned long p, int replace, t_flagcheck flags, int up)
{
	int j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if (g_s == 1)
		ft_inter_one(flags, replace, up, p);
	if (g_s == 2)
	{
		while (replace-- > up)
			ft_putchar('0');
		ft_putstr(ft_itoa_hexa_p(p, flags));
	}
	if (g_s == 3)
		ft_inter_three(replace, up, flags, p);
}
