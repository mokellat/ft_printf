/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 23:17:09 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/30 00:07:49 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_printf_c(const char *ptr, va_list ap)
{
    flagcheck   flags;
    int         j;
    char        *p;
    int         k;

    flags = ft_printf_flag_check(ptr, ap);
    p = va_arg(ap, char *);
    j = 1;
    k = flags.width;
    if (flags.numbers > j)
    {
        s = 1;
        ft_print_help_s(p, flags.numbers, flags, j);
    }
    else if (flags.width > j)
    {
        s = 1;
        ft_print_help_s(p, flags.width, flags, j);
    }
    else if (flags.width < 0)
    {
        s = 1;
        ft_print_help_s(p, k * -1, flags, j);
    }
}