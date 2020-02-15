/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:11:08 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:18:38 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_negative_u(t_flagcheck flags, unsigned int p)
{
	int	j;

	j = ft_strlen(ft_itoa_p(p));
	j = (p == 0 && g_t == 1) ? 0 : j;
	if (flags.numbers != 0)
		ft_numbers_u(flags, p);
	else if (flags.width != 0)
		ft_width_u(flags, p);
	else if (flags.precision != 0)
		ft_precision_u(flags, p);
	else if (j != 0)
		ft_putnbr_p(p);
}
