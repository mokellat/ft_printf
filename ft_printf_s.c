/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 18:49:34 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 21:58:25 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_printf_s(const char *ptr, va_list ap, flagcheck flags)
{
    int         j;
    char        *p;
    int          k;
    
    p = va_arg(ap, char *);
    (!p) ? (p = ft_strdup("(null)")) : p;
    j = ft_strlen(p);
    k = flags.width;
    if (flags.numbers > j)
    {
        s = 1;
        ft_print_help_s(p, flags.numbers, flags, j);
    }
    else if(flags.width > j)
    {
        s = 1;
        ft_print_help_s(p, flags.width, flags, j);
    }
    else if(flags.width < 0)
    {
        s = 1;
        ft_print_help_s(p, k * -1, flags, j);
    }
    else if(flags.precision > 0)
    {
        s = 2;
        ft_print_help_s(p, flags.precision, flags, 0);
    }
    else
        if(t == 0)
            ft_putstr(p);
}