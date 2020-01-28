/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:09:41 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/20 23:40:38 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int find_precision(const char *ptr, va_list ap)
{
	int	j;
	int	k;

	j = i;
	k = 0;
	t = 0;
	if (ptr[i] == '.')
	{
		i += 1;
		if (ptr[i] >= '0' && ptr[i] <= '9')
		{
			while (ptr[i] >= '0' && ptr[i] <= '9')
				i += 1;
			k = ft_atoi(ptr + j + 1);
		}
		else if (ptr[i] == '*')
		{
			i++;
			k = va_arg(ap, int);
		}
		if (k == 0)
			t = 1;
	}
	return (k);
}