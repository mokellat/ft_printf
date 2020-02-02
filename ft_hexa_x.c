/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:28:42 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 15:49:47 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_hexa_x(unsigned int p, flagcheck flags)
{
    unsigned int k;

    k = p;
    if (k < 26)
    {
        if (k < 10)
        {
            back++;
            ft_putnbr(k);
        }
        if (k >= 10 && k <= 15)
        {
            back++;
            if(flags.conversion == 'X')
                ft_putchar((k % 10) + 65);
            else
                ft_putchar((k % 10) + 97);
        }
        if (k >= 16 && k <= 25)
        {
            back++;
            ft_putnbr(k % 16 + 10);
        }
    }
    else
    {
        ft_hexa_x(k / 16, flags);
        ft_hexa_x(k % 16, flags);
    }
}