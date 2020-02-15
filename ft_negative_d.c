/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:37:33 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:48:40 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_negative_d(va_list ap, t_flagcheck flags, int p)
{
	int j;

	j = ft_strlen(ft_itoa(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	(p < 0) ? j-- : j;
	if (flags.numbers != 0)
		ft_numbers_d(ap, flags, p);
	else if (flags.width != 0)
		ft_width_d(ap, flags, p);
	else if (flags.precision != 0)
		ft_precision_d(ap, flags, p);
	else if (j != 0)
		ft_putnbr(p);
}
