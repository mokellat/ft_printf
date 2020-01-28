/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:20:59 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/13 00:45:16 by mokellat         ###   ########.fr       */
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
