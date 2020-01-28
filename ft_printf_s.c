/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 18:49:34 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/27 23:31:22 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_printf_s(const char *ptr, va_list ap)
{
    flagcheck   flags;
    int         j;
    char        *p;

    p = va_arg(ap, char *);
    j = ft_strlen(p);
    flags = ft_printf_flag_check(ptr, ap);
    if (flags.numbers > j)
    {
        s = 1;
        ft_print_help_s(p, flags.numbers, flags, j);
    }
    else if(flags.width > j)
    {
        s = 1;
        ft_print_help_s(p, flags.numbers, flags, j);
    }
    else
        ft_putstr(p);
}