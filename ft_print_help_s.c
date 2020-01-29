/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 22:59:41 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/27 23:17:36 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_print_help_s(char *p, int replace, flagcheck flags, int up)
{
    if (s == 1)
    {
        if (flags.width < 0)
        {
            ft_putstr(p);
            while (replace-- > up)
            {
                ft_putchar(' ');
                back++;
            }
        }
        while (replace-- > up)
        {
            ft_putchar(' ');
            back++;
        }
        ft_putstr(p);
    }
}