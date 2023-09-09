CC = gcc
CFLAGS = -Wall -Wextra -Werror
TEST_FLAGS = -lcheck -lm -lpthread -lsubunit
SRC_PATH = ../src

all: test_sum test_is_negative

test_sum:
	@$(CC) $(CFLAGS) $(SRC_PATH)/sum.c test_sum.c -o test_sum $(TEST_FLAGS)
	@./test_sum
	@rm test_sum

test_is_negative:
	@$(CC) $(CFLAGS) $(SRC_PATH)/is_negative.c test_is_negative.c -o test_is_negative $(TEST_FLAGS)
	@./test_is_negative
	@rm test_is_negative

