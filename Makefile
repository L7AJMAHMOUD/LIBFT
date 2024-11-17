NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARCHIVE = ar -rc
CLEAN = rm -rf

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_itoa.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c \
	   ft_memmove.c ft_memset.c ft_putchar_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
	   ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c \
	   ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrchr.c \
	   ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Objects FIles ARchIvED SUccefuLLy TO $(NAME)"
	@$(ARCHIVE) $(NAME) $(OBJS)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "ClEaNeD"
	@$(CLEAN) $(OBJS)

fclean:
	@echo "FUlL ClEaN"
	@$(CLEAN) $(NAME) $(OBJS)

re: fclean all
	@echo " THe ProjECt is SUccefuLLy CleANed & ReMAkeD __"
