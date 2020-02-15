/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:00:19 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 20:43:39 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_negative_p(va_list ap, t_flagcheck flags, unsigned long p)
{
	int	j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if (flags.numbers != 0)
		ft_numbers_p(ap, flags, p);
	else if (flags.width != 0)
		ft_width_p(ap, flags, p);
	else if (flags.precision != 0)
		ft_precision_p(ap, flags, p);
	else if (j != 0)
		ft_putstr(ft_itoa_hexa_p(p, flags));
}
