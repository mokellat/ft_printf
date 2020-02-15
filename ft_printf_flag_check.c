/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:30:20 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 23:04:24 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flagcheck	ft_printf_flag_check(const char *ptr, va_list ap)
{
	t_flagcheck flags;

	flags.zero = find_zero(ptr);
	flags.negative = find_negative(ptr);
	while (ptr[g_i] == '0' || ptr[g_i] == '-')
		g_i++;
	flags.numbers = find_numbers(ptr);
	flags.width = find_width(ptr, ap);
	flags.precision = find_precision(ptr, ap);
	flags.conversion = ptr[g_i];
	g_i++;
	return (flags);
}
