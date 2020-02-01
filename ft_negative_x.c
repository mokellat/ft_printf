/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:42:50 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/01 15:50:43 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_negative_x(va_list ap, flagcheck flags, unsigned int p)
{
    int j;

    j = ft_strlen(ft_itoa_hexa(p));
    j = (p == 0 && t == 1) ? 0 : j;
    if (flags.numbers != 0)
        ft_numbers_x(ap, flags, p);
    else if (flags.width != 0)
        ft_width_x(ap, flags, p);
    else if(flags.precision != 0)
        ft_precision_x(ap, flags, p);
    else if (j != 0)
        ft_hexa_x(p, flags);
}