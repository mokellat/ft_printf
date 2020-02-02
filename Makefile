CC = gcc
AR = ar
NAME = libftprintf.a
LIB = libftprintf.a
FILES = *.c

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
