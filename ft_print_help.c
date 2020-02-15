/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:16:20 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 02:00:15 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_dont(t_flagcheck flags, int replace, int p, int j)
{
	int replace1;

	replace1 = flags.precision;
	if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1))
	{
		(flags.width < 0) ? (flags.width *= -1) : (flags.width);
		ft_p_is_neg(p, &j);
		while (replace1-- > j)
			ft_putchar('0');
		if (j != 0)
			(p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
		while (replace-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > 0)
			ft_putchar(' ');
		ft_p_is_neg(p, &j);
		while (replace1-- > j)
			ft_putchar('0');
		if (j != 0)
			(p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
	}
}

void	ft_know(int replace, int up, int p, t_flagcheck flags)
{
	int j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (flags.width < 0 || (flags.width < 0 && flags.precision < 0)
			|| flags.negative == 1)
	{
		if (j != 0)
			ft_putnbr(p);
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		if (j != 0)
			ft_putnbr(p);
	}
}

void	ft_print_help(int p, int replace, t_flagcheck flags, int up)
{
	int j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (g_s == 1)
		ft_know(replace, up, p, flags);
	if (g_s == 2)
	{
		ft_p_is_neg(p, &j);
		while (replace-- > up)
			ft_putchar('0');
		if (j != 0)
			(p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
	}
	if (g_s == 3)
		ft_dont(flags, replace, p, j);
}
