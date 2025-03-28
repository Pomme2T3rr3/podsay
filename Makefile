CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = podsay

all: $(TARGET)

$(TARGET): podsay.c
	$(CC) $(CFLAGS) podsay.c -o $(TARGET)

prepare:
	strfile utils/pod

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)
