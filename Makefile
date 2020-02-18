CC = gcc
AR = ar
NAME = libftprintf.a
LIB = libftprintf.a
flags = -Wall -Werror -Wextra
FILES = find_width.c ft_itoa_hexa_p.c ft_negative_x.c ft_p_is_neg.c ft_print_help.c ft_printf.c ft_printf_p.c ft_putchar.c ft_strdup.c ft_width_p.c ft_zero_u.c find_conversion.c find_zero.c ft_itoa_p.c ft_numbers_d.c ft_precision_d.c ft_print_help_c.c ft_printf_c.c ft_printf_per.c ft_putnbr.c ft_strjoin.c ft_width_u.c ft_zero_x.c find_negative.c ft_atoi.c ft_negative_d.c ft_numbers_p.c ft_precision_p.c ft_print_help_p.c ft_printf_flag_check.c ft_printf_s.c ft_putnbr_p.c ft_strlen.c ft_width_x.c libftprintf.h find_numbers.c ft_itoa.c ft_negative_p.c ft_numbers_u.c ft_precision_u.c ft_print_help_s.c ft_printf_flag_reexecution.c ft_printf_u.c ft_putstr.c ft_strncmp.c ft_zero_d.c  find_precision.c ft_itoa_hexa.c ft_negative_u.c ft_numbers_x.c ft_precision_x.c ft_print_help_x.c ft_printf_help_u.c ft_printf_x.c ft_s_check.c ft_width_d.c ft_zero_p.c 

all: $(NAME)
		@echo "Creating the library . . . . ."
$(NAME):
		@$(CC) $(flags) -c $(FILES) -I $(LIB)
			@$(AR) rc $(NAME) *.o
				@ranlib $(NAME)
clean:
		@echo "Cleaning *.o files . . . . ."
			@rm -rf *.o
fclean: clean
		@echo "Cleaning all files . . . . ."
			@rm -rf *.a
bonus:
	@echo "don't exist . . . . ."

re: fclean all
		@echo "Recreating the library . . . . ."
