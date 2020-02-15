/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:04:51 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:54:11 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_s_check(int j, t_flagcheck flags)
{
	if (((flags.numbers > j && flags.precision == 0) || (flags.precision < 0)
				|| (flags.precision < j)))
		(g_s = 1);
	else if (flags.precision >= flags.numbers && flags.width == 0)
		g_s = 2;
	else if ((flags.numbers > flags.precision && flags.precision > 0) ||
			(flags.width < 0 && flags.precision < 0))
		g_s = 3;
	else if ((flags.width != 0 && flags.precision == 0) || (flags.precision < j)
			|| (flags.width < 0 && flags.precision < 0))
		g_s = 1;
	else if (flags.precision >= flags.width && flags.precision > 0)
	{
		if (flags.width < 0 && flags.width * -1 > flags.precision)
			g_s = 3;
		else
			g_s = 2;
	}
	else if (flags.precision < flags.width)
		g_s = 3;
}
