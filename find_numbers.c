/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 21:14:15 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/09 19:42:02 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int find_numbers(const char *ptr)
{
	char	*str;
	int		j;

	j = 0;
	if (ptr[i] >= '0' && ptr[i] <= '9')
	{
		j = i;
		while(ptr[i] >= '0' && ptr[i] <= '9')
			i += 1;	
		return (ft_atoi(ptr + j));
	}
	else
		return (0);
}
