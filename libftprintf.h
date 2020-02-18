/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 01:33:18 by mokellat          #+#    #+#             */
/*   Updated: 2020/02/17 00:33:45 by mokellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <stdarg.h>

int				ft_printf(const char *ptr, ...);
typedef struct	s_flagcheck
{
	int		zero;
	int		precision;
	int		width;
	int		numbers;
	char	conversion;
	int		negative;
}				t_flagcheck;
int				find_negative(const char *ptr);
int				find_zero(const char *ptr);
int				find_numbers(const char *ptr);
int				find_precision(const char *ptr, va_list ap);
int				find_width(const char *ptr, va_list ap);
void			find_conversion(const char *ptr, va_list ap);
t_flagcheck		ft_printf_flag_check(const char *ptr, va_list ap);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
int				g_i;
void			ft_printf_flag_reexecution(va_list ap, t_flagcheck flags);
void			ft_precision_d(t_flagcheck flags, int p);
void			ft_numbers_d(t_flagcheck flags, int p);
void			ft_width_d(t_flagcheck flags, int p);
void			ft_negative_d(t_flagcheck flags, int p);
void			ft_negative_width_d(va_list ap, t_flagcheck flags, int p);
void			ft_negative_numbers_d(va_list ap, t_flagcheck flags, int p);
void			ft_negative_num_prec_d(va_list ap, t_flagcheck flags, int p);
void			ft_zero_d(t_flagcheck flags, int p);
void			ft_zero_numbers_d(va_list ap, t_flagcheck flags, int p);
void			ft_zero_width_d(va_list ap, t_flagcheck flags, int p);
void			ft_zero_num_prec_d(va_list ap, t_flagcheck flags, int p);
int				g_s;
void			ft_print_help(int p, int replace, t_flagcheck flags, int up);
void			ft_s_check(int j, t_flagcheck flags);
void			ft_p_is_neg(int p, int *j);
void			ft_num_intern(int p, t_flagcheck flags, int j);
void			ft_printf_c(va_list ap, t_flagcheck flags);
void			ft_printf_p(va_list ap, t_flagcheck flags);
void			ft_printf_x(va_list ap, t_flagcheck flags);
void			ft_printf_s(va_list ap, t_flagcheck flags);
void			ft_printf_u(va_list ap, t_flagcheck flags);
void			ft_printf_per(t_flagcheck flags);
void			ft_printf_i(va_list ap, t_flagcheck flgs);
int				g_t;
int				g_back;
void			ft_print_help_s(char *p, int replace, t_flagcheck flags,
int up);
char			*ft_strdup(const char *src);
void			ft_print_help_c(char p, int replace, t_flagcheck flags, int up);
void			ft_hexa_x(unsigned int p, t_flagcheck flags);
void			ft_print_help_x(unsigned int p, int replace, t_flagcheck flags,
		int up);
void			ft_precision_x(t_flagcheck flags, unsigned int p);
void			ft_negative_x(t_flagcheck flags, unsigned int p);
void			ft_numbers_x(t_flagcheck flags, unsigned int p);
void			ft_width_x(t_flagcheck flags, unsigned int p);
void			ft_zero_x(t_flagcheck flags, unsigned int p);
char			*ft_itoa_hexa(unsigned int n, t_flagcheck flags);
char			*ft_itoa(int n);
char			*ft_strdup(const char *src);
size_t			ft_strlen(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_putchar(char c);
void			ft_putstr(char *s);
int				ft_atoi(const char *str);
void			ft_negative_p(t_flagcheck flags, unsigned long p);
void			ft_zero_p(t_flagcheck flags, unsigned long p);
void			ft_numbers_p(t_flagcheck flags, unsigned long p);
void			ft_precision_p(t_flagcheck flags, unsigned long p);
void			ft_width_p(t_flagcheck flags, unsigned long p);
void			ft_print_help_p(unsigned long p, int replace, t_flagcheck flags,
		int up);
char			*ft_itoa_hexa_p(unsigned long p, t_flagcheck flags);
void			ft_negative_u(t_flagcheck flags, unsigned int p);
void			ft_precision_u(t_flagcheck flags, unsigned int p);
void			ft_numbers_u(t_flagcheck flags, unsigned int p);
void			ft_width_u(t_flagcheck flags, unsigned int p);
void			ft_zero_u(t_flagcheck flags, unsigned int p);
void			ft_print_help_u(unsigned int p, int replace, t_flagcheck flags,
		int up);
char			*ft_itoa_p(unsigned int n);
void			ft_putnbr_p(unsigned int nb);
int				ft_strncmp(const char *s1, const char *s2);
#endif
