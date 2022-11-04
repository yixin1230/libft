# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/04 18:24:11 by yizhang       #+#    #+#                  #
#    Updated: 2022/11/04 18:24:11 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o \
		ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o\
		ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o\
		ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o\
		ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o\
		ft_putnbr_fd.o

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o\
			ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

ifndef ADDBONUS
	ALLOBJS = ${OBJS} + ${B_OBJS}
else
	ALLOBJS = ${OBJS}
endif

all: $(NAME)

$(OBJS):$(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

${B_OBJS}: ${B_SRCS}
	$(CC) $(FLAGS) -c $(B_SRCS)

$(NAME):$(ALLOBJS)
	ar -rcs $(NAME) $(ALLOBJS)

bonus:
	@$(MAKE) ADDBONUS=1

clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
