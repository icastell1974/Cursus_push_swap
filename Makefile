# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 18:18:35 by icastell          #+#    #+#              #
#    Updated: 2022/01/27 21:37:48 by icastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -g3 -fsanitize=address
MKDIR	=	mkdir -p 
SRC		=	src

LIBFT	=	-L libft -lft
LIB		=	lib/push_swap.h
P_SWAP	=	src/push_swap.c
SRCS	=	$(SRC)/ft_args_in_a_string.c\
			$(SRC)/ft_check_valid_num.c\
			$(SRC)/ft_check_repeated_num.c\
			$(SRC)/ft_lst_utils.c\
			$(SRC)/ft_sort.c\
			$(SRC)/ft_sa_sb_ss.c\
			$(SRC)/ft_ra_rb_rr.c\
			$(SRC)/ft_rra_rrb_rrr.c\
			$(SRC)/ft_pa_pb.c\

OBJS	:=	$(SRCS:.c=.o) $(P_SWAP:.c=.o)

all:	$(NAME)

$(NAME)	:	$(OBJS)

	make -C libft
	$(CC) $(CFLAGS) $(SRCS) $(P_SWAP) $(LIBFT) -o $(NAME)

normi:
			norminette -R CheckForbiddenSourceHeader $(SRCS) $(LIB)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -rf $(NAME)

fclean_all:	fclean
			make fclean -C libft

re:		fclean all

.PHONY:	all clean fclean re fclean_all