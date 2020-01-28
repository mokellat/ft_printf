/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:47:16 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/26 18:17:58 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_zero_d(va_list ap, flagcheck flags, int p)
{
    int j;

    j = ft_strlen(ft_itoa(p));
    j = (p == 0 && t == 1) ? 0 : j;
    if ((flags.numbers > j))
    {
        s = 2;
        ft_print_help(p, flags.numbers, flags, j);
    }
    else if (flags.width > j)
    {
        s = 2;
        ft_print_help(p, flags.width, flags, j);
    }
    else
    {
        if (flags.numbers != 0)
            ft_numbers_d(ap, flags, p);
        else if (flags.width != 0)
            ft_width_d(ap, flags, p);
        else if (flags.precision != 0)
            ft_precision_d(ap, flags, p);
        else if (j != 0)
            ft_putnbr(p);
    }
}