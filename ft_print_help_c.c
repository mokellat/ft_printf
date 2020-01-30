/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:13:47 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/30 11:23:15 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_print_help_c(char p, int replace, flagcheck flags, int up)
{   
    if (s == 1)
    {
        if (flags.width < 0 || flags.negative == 1)
        {
            ft_putchar(p);
            back++;
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
            ft_putchar(p);
            back++;
        }
    }
}