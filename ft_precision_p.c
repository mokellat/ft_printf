/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:35:28 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/10 15:59:56 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_precision_p(va_list ap, flagcheck flags, unsigned long p)
{
    int j;
    int k;
    
    j = ft_strlen(ft_itoa_hexa_p(p, flags));
    ft_numbers_p(ap, flags, p);
}