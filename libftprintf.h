/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokellat <mokellat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 01:33:18 by mokellat          #+#    #+#             */
/*   Updated: 2020/01/29 23:02:34 by mokellat         ###   ########.fr       */
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

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *src);
size_t			ft_strlen(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
char			**put_split(char c, char **str, int *ptr, char *s1);
int				ft_printf(const char *ptr, ...);
typedef struct	flagcheck
{
	int		zero;
	int		precision;
	int		width;
	int		numbers;
	char	conversion;
	int		negative;	
}flagcheck;
int				find_negative(const char *ptr);
int				find_zero(const char *ptr);
int				find_numbers(const char *ptr);
int				find_precision(const char *ptr, va_list ap);
int				find_width(const char *ptr, va_list ap);
void			find_conversion(const char *ptr, va_list ap, flagcheck flags);
flagcheck		ft_printf_flag_check(const char *ptr, va_list ap);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
int				i;
void			ft_printf_flag_reexecution(const char *ptr, va_list ap);
int				ft_printfs(const char *ptr, ...);
void			ft_precision_d(va_list ap, flagcheck flags, int p);
void			ft_numbers_d(va_list ap, flagcheck flags, int p);
void			ft_width_d(va_list ap, flagcheck flags, int p);
void			ft_negative_d(va_list ap, flagcheck flags, int p);
void			ft_negative_width_d(va_list ap, flagcheck flags, int p);
void			ft_negative_numbers_d(va_list ap, flagcheck flags, int p);
void 			ft_negative_num_prec_d(va_list ap, flagcheck flags, int p);
void			ft_zero_d(va_list ap, flagcheck flags, int p);
void			ft_zero_numbers_d(va_list ap, flagcheck flags, int p);
void			ft_zero_width_d(va_list ap, flagcheck flags, int p);
void			ft_zero_num_prec_d(va_list ap, flagcheck flags, int p);
int				s;
void			ft_print_help(int p, int replace, flagcheck flags, int up);
void			ft_s_check(int j, flagcheck flags);
void			ft_p_is_neg(int p, int *j);
void			ft_num_intern(int p, flagcheck flags, int j);
void			ft_printf_c(const char *ptr, va_list ap);
void			ft_printf_p(const char *ptr, va_list ap);
void			ft_printf_x(const char *ptr, va_list ap);
void			ft_printf_X(const char *ptr, va_list ap);
void			ft_printf_s(const char *ptr, va_list ap);
void			ft_printf_u(const char *ptr, va_list ap);
int				t;
int				back;
void			ft_print_help_s(char *p, int replace, flagcheck flags, int up);
char			*ft_strdup(const char *src);
#endif