/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_is_neg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:27:59 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/06 23:09:49 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_p_is_neg(int p, int *j)
{
    if (p < 0)
    {
        ft_putchar('-');
        *j -= 1;
    }
}