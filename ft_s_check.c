/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:04:51 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/25 19:06:26 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_s_check(int j, flagcheck flags)
{
    if (((flags.numbers > j && flags.precision == 0) || (flags.precision < 0 ) || (flags.precision < j)))
        (s = 1);
    else if (flags.precision >= flags.numbers && flags.width == 0)
        s = 2;
    else if ((flags.numbers > flags.precision && flags.precision > 0 ) || (flags.width < 0 && flags.precision < 0))
        s = 3; 
    else if((flags.width != 0 && flags.precision == 0) || (flags.precision < j) || (flags.width < 0 && flags.precision < 0))
        s = 1;
    else if (flags.precision >= flags.width && flags.precision > 0)
    {
        if(flags.width < 0 && flags.width *-1 > flags.precision )
            s = 3;
        else
            s = 2;
    }
    else if (flags.precision < flags.width)
        s = 3;
}