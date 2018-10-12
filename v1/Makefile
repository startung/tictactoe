# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
CFLAGS  = -std=c99 -Wall -pedantic

# the build target executable:
TARGET = tttcheck

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
