CC=gcc
FLAGS=-Wall
FILE=exeMe
LIB=head.c
LIB_OBJ=head.o

### unified cross-platform clean function
#checks for env var of win 
ifeq ($(OS),Windows_NT)
    RM=del /Q
    TARGET=test.exe
else
    RM=rm -f
    TARGET=test
endif

all:
	$(CC) $(FLAGS) $(FILE).c -o $(TARGET)

clean:
	$(RM) $(TARGET) $(LIB_OBJ)