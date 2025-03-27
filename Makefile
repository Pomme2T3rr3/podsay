CC = gcc
CFLAGS = -Wall
TARGET = podsay

all: $(TARGET)

$(TARGET): podsay.c
	$(CC) $(CFLAGS) -o $(TARGET) podsay.c

install: all
	mkdir -p ~/.local/bin
	cp $(TARGET) ~/.local/bin/
	chmod +x ~/.local/bin/$(TARGET)
	echo "Ajoutez ~/.local/bin à votre PATH si nécessaire."

clean:
	rm -f $(TARGET)
