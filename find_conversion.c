/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:00:36 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/06 23:18:34 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	find_conversion(const char *ptr, va_list ap, flagcheck flags)
{
	flags = ft_printf_flag_check(ptr, ap);
	
	if (flags.conversion == 'd')
		ft_printf_flag_reexecution(ptr, ap, flags);
	else if (flags.conversion == 's')
		ft_printf_s(ptr, ap, flags);
	else if (flags.conversion == 'c')
		ft_printf_c(ptr, ap, flags);
	else if (flags.conversion == 'i')
		ft_printf_flag_reexecution(ptr, ap, flags);
	else if (flags.conversion == 'x')
		ft_printf_x(ptr, ap, flags);
	else if (flags.conversion == 'X')
		ft_printf_x(ptr, ap, flags);
	else if (flags.conversion == 'p')
		ft_printf_p(ptr, ap, flags);
	/*else if (flags.conversion == 'u')
		ft_printf_u(ptr, ap);*/
}
