NAME = megaphone

SRC = megaphone.cpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
			$(CC) $(SRC) $(CFLAGS) -o $(NAME)

clean:
			rm -f $(NAME)

fclean: clean
			rm -f $(NAME)
	
re: fclean all