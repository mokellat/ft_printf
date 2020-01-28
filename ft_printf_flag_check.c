/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:30:20 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/16 22:18:13 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

flagcheck	ft_printf_flag_check(const char *ptr, va_list ap)
{
	flagcheck flags;

	flags.negative = find_negative(ptr);
	flags.zero = find_zero(ptr);
	flags.numbers = find_numbers(ptr);
	flags.width = find_width(ptr, ap);
	flags.precision = find_precision(ptr, ap);
	flags.conversion = ptr[i];
	i++;
	return (flags);
}
