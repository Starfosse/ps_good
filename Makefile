NAME = push_swap

NAME_BONUS = checker

SRCS =  main.c push_swap_instruct.c push_swap_instruct2.c push_swap.c lis.c push_swap_utils.c separate.c check.c push_swap_utils2.c save_pos.c choice.c push.c little.c clean.c little2.c push_swap2.c

SRCS_BONUS = checker.c push_swap.c get_next_line_bonus.c get_next_line_utils_bonus.c lis.c push_swap_utils.c separate.c little.c little2.c check.c push_swap_utils2.c save_pos.c choice.c push.c do_instructs.c push_swap_instruct3.c push_swap_instruct4.c clean.c push_swap_instruct.c push_swap_instruct2.c push_swap2.c


OBJECT = $(SRCS:.c=.o)

OBJECT_BONUS = $(SRCS_BONUS:.c=.o)

$(NAME):
		make -C libft/
		make bonus -C libft/
		gcc -Wall -Werror -Wextra -g3 -o $(NAME) $(SRCS) libft/libft.a

$(NAME_BONUS):
		make -C libft/
		make bonus -C libft/
		gcc -Wall -Werror -Wextra -o $(NAME_BONUS) $(SRCS_BONUS) libft/libft.a

all: $(NAME)

clean:
	rm -f $(OBJECT)
	rm -f $(OBJECT_BONUS)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)
	make -C libft/ fclean

re: fclean all
	make -C libft/ re

.PHONY: all clean fclean remakem
