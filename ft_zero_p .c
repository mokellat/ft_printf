/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_p .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:03:14 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/10 15:58:55 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_zero_p(va_list ap, flagcheck flags, unsigned long p)
{
    int j;

    j = ft_strlen(ft_itoa_hexa_p(p, flags));
    j = (p == 0 && t == 1) ? 0 : j;
    if ((flags.numbers > j))
    {
        s = 2;
        ft_print_help_p(p, flags.numbers, flags, j);
    }
    else if (flags.width > j)
    {
        s = 2;
        ft_print_help_p(p, flags.width, flags, j);
    }
    else
    {
        if (flags.numbers != 0)
            ft_numbers_p(ap, flags, p);
        else if (flags.width != 0)
            ft_width_p(ap, flags, p);
        else if (flags.precision != 0)
            ft_precision_p(ap, flags, p);
        else if (j != 0)
           ft_putstr(ft_itoa_hexa_p(p, flags));
    }
}