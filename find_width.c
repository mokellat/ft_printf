/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:20:59 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/29 23:09:50 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int find_width(const char *ptr, va_list ap)
{
	int j;
	
	if (ptr[i] == '*')
	{
		j = va_arg(ap,int);
		i += 1;
		return (j);
	}
	else
		return (0);
}