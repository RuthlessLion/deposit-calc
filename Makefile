UNAME=$(shell uname)

CCFLAGS=-Wall -Wextra -Wno-unused-parameter -O3
CC=gcc

ifeq ($(UNAME), Darwin)
LDFLAGS=-Wl,-flat_namespace,-undefined,dynamic_lookup
endif

all:
	g++ src/main.cpp -Wall -Werror -o bin/main

clean:
	rm -rf build/deposit.o
%.o: %.c thirdparty/ctest.h
	gcc -Wall -Werror -c -o $@ $<

testbuild: test/main.c test/deposit_test.c
	gcc $(CCFLAGS) test/main.c -c
	g++ $(CCFLAGS) test/deposit_test.c -c

test: main.o thirdparty/ctest.h deposit_test.o
	gcc $(CCFLAGS) main.o deposit_test.o -o test