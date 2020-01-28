/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:16:20 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/26 18:33:24 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_print_help(int p, int replace, flagcheck flags, int up)
{
    int j;
    int replace1;
    replace1 = flags.precision;
    j = ft_strlen(ft_itoa(p));
    j = (p == 0 && t == 1) ? 0 : j;
    if (s == 1)
    {
        if (flags.width < 0 || (flags.width < 0 && flags.precision < 0) || flags.negative  == 1)
        {
            if (j != 0)
                ft_putnbr(p);
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
                ft_putnbr(p);
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
            (p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
    }
    if (s == 3)
    {
        if ((flags.width < 0 && flags.precision != 0) || (flags.negative == 1) )
        {
            (flags.width < 0) ? (flags.width *= -1) : (flags.width);
            ft_p_is_neg(p, &j);
            while (replace1-- > up)
            {
                ft_putchar('0');
                back++;
            }
            if (j != 0)
                (p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
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
            ft_p_is_neg(p, &j);
            while (replace1-- > up)
            {
                ft_putchar('0');
                back++;
            }
            if (j != 0)
                (p < 0) ? ft_putnbr(-p) : ft_putnbr(p);
        }
    }
}