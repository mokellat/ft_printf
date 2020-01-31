/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:28:42 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/31 14:59:12 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_hexa_x(unsigned int p)
{
    unsigned int k;

    k = p;
    if (k < 26)
    {
        if (k > 0 && k < 10)
        {
            back++;
            ft_putnbr(k);
        }
        if (k >= 10 && k <= 15)
        {
            back++;
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
        ft_hexa_x(k / 16);
        ft_hexa_x(k % 16);
    }
}