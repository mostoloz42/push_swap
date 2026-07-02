NAME = push_swap.out

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

LIB_A = ./libft/libft.a
LIB_DIR = ./libft

SRCS = calculate_disorder.c create_list.c push.c reverse.c rotate.c \
	select_sort.c swap.c validate_input.c ./libft/libft.a 

OBJS = $(SRCS:.c=.o)

HEADERS = push_swap.h ./libft/libft.h

all: $(LIB_A) $(NAME)

$(LIB_A) :
	$(MAKE) -C $(LIB_DIR) all -s

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

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
