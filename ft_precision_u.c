/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:20:03 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/10 22:57:14 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_precision_u(va_list ap, flagcheck flags, unsigned int p)
{
    int j;
    int k;
    
    j = ft_strlen(ft_itoa_p(p));
    ft_numbers_u(ap, flags, p);
}