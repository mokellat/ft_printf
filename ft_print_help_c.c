/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:13:47 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 00:07:50 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_help_c(char p, int replace, t_flagcheck flags, int up)
{
	if (g_s == 1)
	{
		if (flags.width < 0 || flags.negative == 1)
		{
			ft_putchar(p);
			while (replace-- > up)
				ft_putchar(' ');
		}
		else
		{
			while (replace-- > up)
				ft_putchar(' ');
			ft_putchar(p);
		}
	}
}
