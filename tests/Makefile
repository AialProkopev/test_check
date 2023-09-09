CC = gcc
CFLAGS = -Wall -Wextra -Werror
TEST_FLAGS = -lcheck -lm -lpthread -lsubunit
SRC_PATH = ../src

test_sum: compile_test_sum
	./test_sum
	rm test_sum

compile_test_sum:
	$(CC) $(CFLAGS) $(SRC_PATH)/sum.c test_sum.c -o test_sum $(TEST_FLAGS)

