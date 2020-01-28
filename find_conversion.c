/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:00:36 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/26 21:10:52 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	find_conversion(const char *ptr, va_list ap)
{
	if (ptr[i] == 'd')
		ft_printf_flag_reexecution(ptr, ap);
	else if (ptr[i] == 'c')
		ft_printf_c(ptr, ap);
	else if (ptr[i] == 'p')
		ft_printf_p(ptr, ap);
	else if (ptr[i] == 'x')
		ft_printf_x(ptr, ap);
	else if (ptr[i] == 'X')
		ft_printf_X(ptr, ap);
	else if (ptr[i] == 'i')
		ft_printf_flag_reexecution(ptr, ap);
	else if (ptr[i] == 's')
		ft_printf_s(ptr, ap);
	else if (ptr[i] == 'u')
		ft_printf_u(ptr, ap);
