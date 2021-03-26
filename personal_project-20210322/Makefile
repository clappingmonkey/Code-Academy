CC=gcc
FLAGS=-Wall -c
## wildcard for all .c and .o files
SRC=$(wildcard *.c)
OBJ=$(wildcard *.o)
## var name for the target and the output file
VAR=build

### unified cross-platform clean function
#checks for env var of win 
ifeq ($(OS),Windows_NT)
    RM=del /Q
    TARGET=$(VAR).exe
else
    RM=rm -f
    TARGET=$(VAR)
endif

objects: $(SRC)
	$(CC) $(FLAGS) $^

## $^ returns list of the names of
## all the prerequisites, with spaces between them
$(VAR): $(OBJ)
	$(CC) $^ -o $(TARGET)

clean:
	$(RM) $(TARGET) $(OBJ)