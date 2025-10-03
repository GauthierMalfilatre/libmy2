##
## EPITECH PROJECT, 2025
## LIB_MY
## File description:
## Makefile for libmy
##
SRC =	src/my_putchar.c \
		src/my_putstr.c \
		src/my_strlen.c \
		src/my_putnbr.c \
		src/my_swap.c \
		src/my_strcmp.c \
		src/my_strncmp.c \
		src/my_strcpy.c \
		src/my_stpcpy.c \
		src/my_strncpy.c \
		src/my_stpncpy.c \
		src/my_strdup.c \
		src/my_strndup.c \

OBJ = $(SRC:.c=.o)

CCT = gcc
CFLAGS += -Wall -Wextra -Werror -I./include/

TESTFLAGS = -lcriterion

TESTNAME = unit_tests
TARGET = libmy.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

unit_tests: $(OBJ)
	$(CCT) -o $(TESTNAME) $(OBJ) tests/*.c --coverage $(TESTFLAGS) $(CFLAGS)

test: all
	$(CCT) $(OBJ) main.c -L./ -lmy

clean:
	find -name "*.out" -delete
	find -name "*.o" -delete
	find -name ".log" -delete
	find -name "*.gcda" -delete
	find -name "*.gcno" -delete
	find -name "*.log" -delete

fclean: clean
	rm -rf $(TARGET)
	rm -rf $(TESTNAME)

re: fclean all

.PHONY: all clean fclean re
