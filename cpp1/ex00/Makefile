CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re