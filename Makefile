CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = podsay

all: prepare $(TARGET)

$(TARGET): podsay.c
	$(CC) $(CFLAGS) podsay.c -o $(TARGET)

prepare:
	strfile utils/pod

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f utils/pod.dat 

run: $(TARGET)
	./$(TARGET)

re: fclean all