all:
	g++ -Wall -Werror -c src/deposit.c
	mv deposit.o build
	g++ src/main.cpp build/deposit.o -Wall -Werror -o bin/main
clean:
	rm -rf build/deposit.o
test:
	g++ -Wall -Werror -c test/main.cpp
	mv main.o test/duild
	g++ -I thirdparty src -c test/deposit_test.c -o test/build/deposit_test.o
