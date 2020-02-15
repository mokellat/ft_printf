/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_per.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 07:27:21 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:52:04 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_s_check_per(t_flagcheck flags)
{
	if (flags.zero == 1 && flags.negative == 0 &&
			(flags.width > 1 || flags.numbers > 1))
		g_s = 2;
	else if ((flags.numbers > 1 || flags.width != 0 || flags.negative == 1))
		g_s = 1;
}

void	ft_print_help_per(int replace, t_flagcheck flags)
{
	if (g_s == 1)
	{
		if (flags.width < 0 || flags.negative == 1)
		{
			ft_putchar('%');
			while (replace-- > 1)
				ft_putchar(' ');
		}
		else
		{
			while (replace-- > 1)
				ft_putchar(' ');
			ft_putchar('%');
		}
	}
	if (g_s == 2 && flags.zero == 1)
	{
		while (replace-- > 1)
			ft_putchar('0');
		ft_putchar('%');
	}
}

void	ft_printf_per(const char *ptr, va_list ap, t_flagcheck flags)
{
	int k;

	ft_s_check_per(flags);
	if (flags.numbers > 1 || flags.width > 1)
	{
		k = flags.numbers;
		(flags.width > 1) ? (k = flags.width) : k;
		ft_print_help_per(k, flags);
	}
	else if (flags.width < 0)
	{
		k = flags.width * -1;
		ft_print_help_per(k, flags);
	}
	else
		ft_putchar('%');
}
