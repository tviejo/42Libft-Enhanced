# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 18:53:05 by tviejo            #+#    #+#              #
#    Updated: 2024/08/16 17:56:29 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        =   libft.a

SRC_DIR     =   srcs/
OBJ_DIR     =   objs/

SRC         =   ft_strlen.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
                ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_memset.c ft_memmove.c ft_memcpy.c \
                ft_memcmp.c ft_memchr.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c \
                ft_isalnum.c ft_bzero.c ft_atoi.c ft_calloc.c ft_strdup.c \
                ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
                ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
                get_next_line.c get_next_line_utils.c ft_printdec.c ft_printf.c ft_printhexa.c \
                ft_printstring.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
                ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
                ft_lstiter_bonus.c ft_lstmap_bonus.c ft_atol.c

SRCS        =   $(addprefix $(SRC_DIR), $(SRC))
OBJS        =   $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

CC          =   cc
CFLAGS      =   -Wall -Wextra -Werror

AR		=	ar rcs

RM		=	rm -f

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
				mkdir -p $(OBJ_DIR)
				$(CC) -c $(CFLAGS) $< -o $@

${NAME}:		${OBJS}
				
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
			$(RM) -r $(OBJ_DIR)
			${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME} ${BNAME}

re:				fclean all

.PHONY:			bonus all clean fclean re