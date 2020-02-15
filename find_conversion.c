/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:00:36 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/15 09:38:20 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	find_conversion(const char *ptr, va_list ap)
{
	t_flagcheck	flags;

	flags = ft_printf_flag_check(ptr, ap);
	if (flags.conversion == 'd')
		ft_printf_flag_reexecution(ap, flags);
	else if (flags.conversion == 's')
		ft_printf_s(ap, flags);
	else if (flags.conversion == 'c')
		ft_printf_c(ap, flags);
	else if (flags.conversion == 'i')
		ft_printf_flag_reexecution(ap, flags);
	else if (flags.conversion == 'x')
		ft_printf_x(ap, flags);
	else if (flags.conversion == 'X')
		ft_printf_x(ap, flags);
	else if (flags.conversion == 'p')
		ft_printf_p(ap, flags);
	else if (flags.conversion == 'u')
		ft_printf_u(ap, flags);
	else if (flags.conversion == '%')
		ft_printf_per(flags);
}
