/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:20:59 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:46:39 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	find_width(const char *ptr, va_list ap)
{
	int j;

	if (ptr[g_i] == '*')
	{
		j = va_arg(ap, int);
		g_i += 1;
		return (j);
	}
	else
		return (0);
}
