NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

LIB_A = ./libft/libft.a
LIB_DIR = ./libft

SRCS = calculate_disorder.c create_list.c push.c reverse.c rotate.c \
	select_sort.c swap.c validate_input.c

OBJS = $(SRCS:.c=.o)

all: $(LIB_A) $(NAME)

$(LIB_A) :
	$(MAKE) -C $(LIB_DIR) all -s

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
