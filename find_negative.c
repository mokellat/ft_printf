/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_negative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:21:55 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 22:57:30 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	find_negative(const char *ptr)
{
	if (ptr[g_i] == '-')
	{
		while (ptr[g_i] == '-')
			g_i++;
		return (1);
	}
	else
		return (0);
}
