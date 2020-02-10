/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:13:07 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/10 23:02:28 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_zero_u(va_list ap, flagcheck flags, unsigned int p)
{
    int j;

    j = ft_strlen(ft_itoa_p(p));
    j = (p == 0 && t == 1) ? 0 : j;
    if ((flags.numbers > j))
    {
        s = 2;
        ft_print_help_u(p, flags.numbers, flags, j);
    }
    else if (flags.width > j)
    {
        s = 2;
        ft_print_help_u(p, flags.width, flags, j);
    }
    else
    {
        if (flags.numbers != 0)
            ft_numbers_u(ap, flags, p);
        else if (flags.width != 0)
            ft_width_u(ap, flags, p);
        else if (flags.precision != 0)
            ft_precision_u(ap, flags, p);
        else if (j != 0)
            ft_putnbr_p(p);
    }
}