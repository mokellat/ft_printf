/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_help_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:23:52 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 04:07:00 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_un(t_flagcheck flags, unsigned int p, int replace, int j)
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
			ft_putnbr_p(p);
		while (replace-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > 0)
			ft_putchar(' ');
		while (replace1-- > j)
			ft_putchar('0');
		if (j != 0)
			ft_putnbr_p(p);
	}
}

void	ft_deux(t_flagcheck flags, unsigned int p, int replace, int up)
{
	int	j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (flags.width < 0 || (flags.width < 0 && flags.precision < 0) ||
			flags.negative == 1)
	{
		if (j != 0)
			ft_putnbr_p(p);
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		if (j != 0)
			ft_putnbr_p(p);
	}
}

void	ft_print_help_u(unsigned int p, int replace, t_flagcheck flags, int up)
{
	int j;
	int replace1;

	replace1 = flags.precision;
	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (g_s == 1)
		ft_deux(flags, p, replace, up);
	if (g_s == 2)
	{
		while (replace-- > up)
			ft_putchar('0');
		if (j != 0)
			ft_putnbr_p(p);
	}
	if (g_s == 3)
		ft_un(flags, p, replace, j);
}
