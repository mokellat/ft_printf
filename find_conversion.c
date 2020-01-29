/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:00:36 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/29 23:16:37 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	find_conversion(const char *ptr, va_list ap, flagcheck flags)
{
	if (flags.conversion == 'd')
		ft_printf_flag_reexecution(ptr, ap);
	else if (flags.conversion == 's')
		ft_printf_s(ptr, ap);
	else if (flags.conversion == 'c')
		ft_printf_c(ptr, ap);
	else if (flags.conversion == 'i')
		ft_printf_flag_reexecution(ptr, ap);
	/*else if (flags.conversion == 'p')
		ft_printf_p(ptr, ap);
	else if (flags.conversion == 'x')
		ft_printf_x(ptr, ap);
	else if (flags.conversion == 'X')
		ft_printf_X(ptr, ap);
	else if (flags.conversion == 'u')
		ft_printf_u(ptr, ap);*/
}
