CC = clang++
CFLAGS = -g -Wall -Wextra -Werror
FILES = myPhonebook.cpp
HEADERS = phonebook.hpp contact.hpp
default: phonebook

all: $(default)

$(default) : $(default).cpp
	$(CC) $(CFLAGS) -o $(default) $(default).cpp -I $(HEADERS)
	$(CC) $(CFLAGS) -o $(default) $(default).o
clean:
	rm -rf phonebook *.o