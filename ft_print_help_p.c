/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:43:13 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/11 00:36:09 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_print_help_p(unsigned long p, int replace, flagcheck flags, int up)
{
    int j;
    int replace1;
    
    replace1 = flags.precision;
    j = ft_strlen(ft_itoa_hexa_p(p, flags));
    j = (p == 0 && t == 1) ? 0 : j;
    if (s == 1)
    {
        if (flags.width < 0 || (flags.width < 0 && flags.precision < 0) || flags.negative  == 1)
        {
            if (j != 0 )
               ft_putstr(ft_itoa_hexa_p(p, flags));
            while (replace-- > up)
            {
                ft_putchar(' ');
            }
        }
        else
        {
            while (replace-- > up)
            {
                ft_putchar(' ');
            }
            if (j != 0)
                ft_putstr(ft_itoa_hexa_p(p, flags));
        }
    }
    if (s == 2)
    {
        while (replace-- > up)
        {
            ft_putchar('0');
        }
        if (j != 0)
            ft_putstr(ft_itoa_hexa_p(p, flags));
    }
    if (s == 3)
    {
        if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1) )
        {
            (flags.width < 0) ? (flags.width *= -1) : (flags.width);
            while (replace1-- > up)
            {
                ft_putchar('0');
            }
            if (j != 0)
                ft_putstr(ft_itoa_hexa_p(p, flags));
            while (replace-- > 0)
            {
                ft_putchar(' ');
            }
        }
        else
        {
            while (replace-- > 0)
            {
                ft_putchar(' ');
            }
            while (replace1-- > up)
            {
                ft_putchar('0');
            }
            if (j != 0)
                ft_putstr(ft_itoa_hexa_p(p, flags));
        }
    }
}
