/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:59:21 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/14 08:02:13 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_p(unsigned int nb)
{
	unsigned int n;

	n = nb;
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr_p(n / 10);
		ft_putnbr_p(n % 10);
	}
}
