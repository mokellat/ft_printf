/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:35:07 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 01:39:22 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_three(t_flagcheck flags, int replace, int up, unsigned int p)
{
	int	replace1;
	int	j;

	replace1 = flags.precision;
	j = (p == 0 && g_t == 1) ? 0 : j;
	if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1))
	{
		(flags.width < 0) ? (flags.width *= -1) : (flags.width);
		while (replace1-- > up)
			ft_putchar('0');
		if (j != 0)
			ft_putstr(ft_itoa_hexa(p, flags));
		while (replace-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > 0)
			ft_putchar(' ');
		while (replace1-- > up)
			ft_putchar('0');
		if (j != 0)
			ft_putstr(ft_itoa_hexa(p, flags));
	}
}

void	ft_one(t_flagcheck flags, int replace, int up, unsigned int p)
{
	int j;

	j = (p == 0 && g_t == 1) ? 0 : j;
	if (flags.width < 0 || (flags.width < 0 && flags.precision < 0)
			|| flags.negative == 1)
	{
		if (j != 0)
			ft_putstr(ft_itoa_hexa(p, flags));
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		if (j != 0)
			ft_putstr(ft_itoa_hexa(p, flags));
	}
}

void	ft_print_help_x(unsigned int p, int replace, t_flagcheck flags, int up)
{
	int j;

	j = ft_strlen(ft_itoa_hexa(p, flags));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (g_s == 1)
		ft_one(flags, replace, up, p);
	if (g_s == 2)
	{
		while (replace-- > up)
			ft_putchar('0');
		if (j != 0)
			ft_putstr(ft_itoa_hexa(p, flags));
	}
	if (g_s == 3)
		ft_three(flags, replace, up, p);
}
