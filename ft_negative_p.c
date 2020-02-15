/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:00:19 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:18:32 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_negative_p(t_flagcheck flags, unsigned long p)
{
	int	j;

	j = ft_strlen(ft_itoa_hexa_p(p, flags));
	if (flags.numbers != 0)
		ft_numbers_p(flags, p);
	else if (flags.width != 0)
		ft_width_p(flags, p);
	else if (flags.precision != 0)
		ft_precision_p(flags, p);
	else if (j != 0)
		ft_putstr(ft_itoa_hexa_p(p, flags));
}
