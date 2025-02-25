PHONY: greet build rebuild run clean

greet:
	@echo "Terminating make - please specify target explicitly"
	@echo " build : fast rebuild / build"
	@echo " rebuild : full rebuild"
	@echo " run : run after fast rebuild / build"
	@echo " clean : perform full clean"

build: main

rebuild: clean build

run: build
	./main

clean:
	rm -rvf main.o initialization.o threads.o table.o main

main: main.o initialization.o threads.o table.o
	gcc -o main main.o initialization.o threads.o table.o -pthread -lm

main.o: main.c
	gcc -c -o main.o main.c -Wall

initialization.o: initialization.c
	gcc -c -o initialization.o initialization.c

threads.o: threads.c
	gcc -c -o threads.o threads.c

table.o: table.c
	gcc -c -o table.o table.c
