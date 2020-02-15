/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 21:14:15 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 08:24:27 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	find_numbers(const char *ptr)
{
	int		j;

	j = 0;
	if (ptr[g_i] >= '0' && ptr[g_i] <= '9')
	{
		j = g_i;
		while (ptr[g_i] >= '0' && ptr[g_i] <= '9')
			g_i += 1;
		return (ft_atoi(ptr + j));
	}
	else
		return (0);
}
