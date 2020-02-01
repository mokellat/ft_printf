/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:35:07 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/01 15:51:31 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_help_x(unsigned int p, int replace, flagcheck flags, int up)
{
   int j;
    int replace1;
    replace1 = flags.precision;
    j = ft_strlen(ft_itoa_hexa(p));
    j = (p == 0 && t == 1) ? 0 : j;
    if (s == 1)
    {
        if (flags.width < 0 || (flags.width < 0 && flags.precision < 0) || flags.negative  == 1)
        {
            if (j != 0 )
                ft_hexa_x(p, flags);
            while (replace-- > up)
            {
                ft_putchar(' ');
                back++;
            }
        }
        else
        {
            while (replace-- > up)
            {
                ft_putchar(' ');
                back++;
            }
            if (j != 0)
                ft_hexa_x(p, flags);
        }
    }
    if (s == 2)
    {
        ft_p_is_neg(p, &j);
        while (replace-- > up)
        {
            ft_putchar('0');
            back++;
        }
        if (j != 0)
            ft_hexa_x(p, flags);
    }
    if (s == 3)
    {
        if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1) )
        {
            (flags.width < 0) ? (flags.width *= -1) : (flags.width);
            while (replace1-- > up)
            {
                ft_putchar('0');
                back++;
            }
            if (j != 0)
                ft_hexa_x(p, flags);
            while (replace-- > 0)
            {
                ft_putchar(' ');
                back++;
            }
        }
        else
        {
            while (replace-- > 0)
            {
                ft_putchar(' ');
                back++;
            }
            while (replace1-- > up)
            {
                ft_putchar('0');
                back++;
            }
            if (j != 0)
                ft_hexa_x(p, flags);
        }
    }
}
