/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:27:54 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 21:15:06 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_atoi(const char *str)
{
	unsigned long long	test;
	int					signe;
	int					i;

	signe = 1;
	i = 0;
	test = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		test = test * 10 + (unsigned long long)(str[i] - 48);
		i++;
	}
	if (test > 9223372036854775807)
		return ((signe == -1) ? (0) : (-1));
	return (signe * test);
}
