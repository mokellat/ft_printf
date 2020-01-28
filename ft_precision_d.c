/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:54:45 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/20 22:35:11 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_precision_d(va_list ap, flagcheck flags, int p)
{
    int j;
    int k;
    
    j = ft_strlen(ft_itoa(p));
    ft_numbers_d(ap, flags, p);
}