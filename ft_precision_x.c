/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:58:58 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/31 14:57:51 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_precision_x(va_list ap, flagcheck flags, unsigned int p)
{
    int j;
    int k;
    
    j = ft_strlen(ft_itoa(p));
    ft_numbers_x(ap, flags, p);
}