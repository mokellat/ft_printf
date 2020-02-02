/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 09:45:21 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 21:59:26 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_printf_p(const char *ptr, va_list ap, flagcheck flags)
{
    unsigned long   p;

    p = va_arg(ap, unsigned long);
    ft_printf_x(ptr, ap, flags);
}