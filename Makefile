NAME = libftprintf.a

LIST =		ft_printf.c		ft_type.c \
			ft_print_char.c	ft_print_str.c \
			ft_print_int.c	ft_print_unsig.c \
			ft_print_xX.c	ft_print_pnt.c \
			ft_itoa_xX.c	ft_itoa_unsig.c \
			ft_strlen.c		ft_putstr_fd.c \
			ft_itoa.c

OBJ = $(patsubst %.c,%.o,$(LIST))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re