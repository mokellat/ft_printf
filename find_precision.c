/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:09:41 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:58:22 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	find_precision(const char *ptr, va_list ap)
{
	int	j;
	int	k;

	j = g_i;
	k = 0;
	g_t = 0;
	if (ptr[g_i] == '.')
	{
		g_i += 1;
		if (ptr[g_i] >= '0' && ptr[g_i] <= '9')
		{
			while (ptr[g_i] >= '0' && ptr[g_i] <= '9')
				g_i += 1;
			k = ft_atoi(ptr + j + 1);
		}
		else if (ptr[g_i] == '*')
		{
			g_i++;
			k = va_arg(ap, int);
		}
		if (k == 0)
			g_t = 1;
	}
	return (k);
}
