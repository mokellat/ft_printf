/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 22:59:41 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/29 21:57:36 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_print_help_s(char *p, int replace, flagcheck flags, int up)
{
    int k;
    
    if (s == 1)
    {
        if (flags.width < 0 || flags.negative == 1)
        {
            ft_putstr(p);
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
            ft_putstr(p);
        }
    }
    if(s == 2)
    {
        k = 0;
        while(k < replace)
        {
            ft_putchar(p[k]);
            back++;
            k++;
            if(k == ft_strlen(p))
                break;
        }
    }
}