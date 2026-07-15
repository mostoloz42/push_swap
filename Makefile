NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I/includes

LIB_A = ./libft/libft.a
LIB_DIR = ./libft

SRCS = adaptive_sort.c aux_intermedio.c calculate_disorder.c checks.c \
	create_list.c free.c ft_atol.c ft_flags.c main.c medium_sort.c \
	nodos.c push.c reverse.c rotate.c simple_sort.c sort_five.c sort_three.c  \
	swap.c t_index.c validate_input.c ./libft/libft.a \

OBJS = $(SRCS:.c=.o)

HEADERS = push_swap.h $(LIB_DIR)/libft.h

all: $(LIB_A) $(NAME)

$(LIB_A) :
	$(MAKE) -C $(LIB_DIR) all -s

$(NAME): $(OBJS) $(LIB_A)
	$(CC) $(CFLAGS) $(OBJS) $(LIB_A) -o $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIB_DIR) clean -s
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean -s
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
