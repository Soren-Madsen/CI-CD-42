CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge01

.PHONY: all test clean


all: $(TARGET)

$(TARGET): starter.c suma.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c suma.c

test: suma.c test_challenge01.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) suma.c test_challenge01.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
