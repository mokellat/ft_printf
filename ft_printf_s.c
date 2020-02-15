/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 18:49:34 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 04:47:29 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_s_check_s(t_flagcheck flags, int j, char *p)
{
	if (flags.numbers > 0 || flags.width > 0)
	{
		if (flags.numbers > 0 && flags.precision < j && flags.precision > 0)
			g_s = 3;
		else if (flags.width > 0 && flags.precision < j && flags.precision > 0)
			g_s = 3;
		else
			g_s = 1;
	}
	else if (flags.width < 0)
	{
		if (flags.precision < j && flags.precision > 0)
			g_s = 3;
		else
			g_s = 1;
	}
	else if (flags.precision > 0 && (ft_strncmp(p, "") != 0))
		g_s = 2;
}

void	ft_wahade(t_flagcheck flags, int j, int k, char *p)
{
	if (flags.numbers > 0 && flags.precision < j && flags.precision > 0)
	{
		k = flags.numbers - flags.precision;
		ft_print_help_s(p, k, flags, 0);
	}
	else if (flags.width > 0 && flags.precision < j && flags.precision > 0)
	{
		k = flags.width - flags.precision;
		ft_print_help_s(p, k, flags, 0);
	}
	else
	{
		(flags.numbers > j) ? (k = flags.numbers) : k;
		ft_print_help_s(p, k, flags, j);
	}
}

void	ft_printf_s(const char *ptr, va_list ap, t_flagcheck flags)
{
	int		j;
	char	*p;
	int		k;

	p = va_arg(ap, char *);
	(!p) ? (p = ft_strdup("(null)")) : p;
	j = ft_strlen(p);
	j = (g_t == 1) ? 0 : j;
	k = flags.width;
	ft_s_check_s(flags, j, p);
	if (flags.numbers > 0 || flags.width > 0)
		ft_wahade(flags, j, k, p);
	else if (flags.width < 0)
	{
		if (flags.precision < j && flags.precision > 0)
		{
			k = flags.width * -1 - flags.precision;
			ft_print_help_s(p, k, flags, 0);
		}
		else
			ft_print_help_s(p, k * -1, flags, j);
	}
	else if (flags.precision > 0 && (ft_strncmp(p, "") != 0))
		ft_print_help_s(p, flags.precision, flags, j);
	else if (g_t == 0)
		ft_putstr(p);
}
