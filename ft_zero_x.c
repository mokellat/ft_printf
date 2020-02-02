/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:45:26 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 20:55:27 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_zero_x(va_list ap, flagcheck flags, unsigned int p)
{
    int j;

    j = ft_strlen(ft_itoa_hexa(p, flags));
    j = (p == 0 && t == 1) ? 0 : j;
    if ((flags.numbers > j))
    {
        s = 2;
        ft_print_help_x(p, flags.numbers, flags, j);
    }
    else if (flags.width > j)
    {
        s = 2;
        ft_print_help_x(p, flags.width, flags, j);
    }
    else
    {
        if (flags.numbers != 0)
            ft_numbers_x(ap, flags, p);
        else if (flags.width != 0)
            ft_width_x(ap, flags, p);
        else if (flags.precision != 0)
            ft_precision_x(ap, flags, p);
        else if (j != 0)
           ft_putstr(ft_itoa_hexa(p, flags));
    }
}