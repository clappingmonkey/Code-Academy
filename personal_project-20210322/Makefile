CC=gcc
FLAGS=-Wall
## wildcard for all .c files
SRC=$(wildcard *.c) 
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

## $^ returns list of the names of
## all the prerequisites, with spaces between them
$(VAR): $(SRC)
	$(CC) $^ $(FLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)