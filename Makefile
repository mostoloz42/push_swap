NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I/includes

LIB_A = ./libft/libft.a
LIB_DIR = ./libft

SRCS = calculate_disorder.c create_list.c push.c reverse.c rotate.c \
	select_sort.c swap.c validate_input.c checks.c ft_flags.c free.c\
	 ft_atol.c nodos.c main.c

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
