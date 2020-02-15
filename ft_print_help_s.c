/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 22:59:41 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:13:02 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_k_is_there(t_flagcheck flags, char *p, int k)
{
	while (k < flags.precision)
	{
		ft_putchar(p[k]);
		k++;
		if ((size_t)k == ft_strlen(p))
			break ;
	}
}

void	ft_condition_three(t_flagcheck flags, int replace, int up, char *p)
{
	int	k;

	if (flags.width < 0)
	{
		k = 0;
		ft_k_is_there(flags, p, k);
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		k = 0;
		while (k < flags.precision)
		{
			ft_putchar(p[k]);
			k++;
			if ((size_t)k == ft_strlen(p))
				break ;
		}
	}
}

void	ft_g_s(t_flagcheck flags, int replace, int up, char *p)
{
	if (flags.width < 0 || flags.negative == 1)
	{
		if (g_t == 0)
			ft_putstr(p);
		while (replace-- > up)
			ft_putchar(' ');
	}
	else
	{
		while (replace-- > up)
			ft_putchar(' ');
		if (g_t == 0)
			ft_putstr(p);
	}
}

void	ft_print_help_s(char *p, int replace, t_flagcheck flags, int up)
{
	int	k;

	if (g_s == 1)
		ft_g_s(flags, replace, up, p);
	if (g_s == 2)
	{
		k = 0;
		while (k < replace)
		{
			ft_putchar(p[k]);
			k++;
			if ((size_t)k == ft_strlen(p))
				break ;
		}
	}
	if (g_s == 3)
		ft_condition_three(flags, replace, up, p);
}
