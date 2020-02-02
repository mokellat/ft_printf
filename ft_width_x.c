/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:52:40 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/02 16:28:42 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_width_x(va_list ap, flagcheck flags, unsigned int p)
{
	int j;
	int k;
	
	j = ft_strlen(ft_itoa_hexa(p, flags));
	j = (p == 0 && t == 1) ? 0 : j;
	ft_s_check(j, flags);
	k = flags.width;
	if ((flags.width != 0 && flags.precision == 0 ) || (flags.precision < j))
    {
		(k < 0) ? (k *= -1) : k;
		ft_print_help_x(p, k, flags, j);
	}
	else if ((flags.precision >= flags.width && flags.precision > 0))
		ft_print_help_x(p, flags.precision, flags, j);
	else if (flags.precision < flags.width && flags.precision > 0)
	{
		(k = flags.width - flags.precision);
		ft_print_help_x(p, k, flags, j);
	}
	else if(flags.width < 0 && flags.width * -1 > flags.precision )
	{
		(k = (flags.width * - 1) - flags.precision);
		ft_print_help_x(p, k, flags, j);
	}
	else if(flags.precision < 0)
	{
		k = flags.width * -1;
        ft_print_help_x(p, k, flags, j);
	}
}