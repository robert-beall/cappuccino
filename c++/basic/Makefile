index:
	@echo "build: compile all files"
	@echo "clear: remove all compiled files"
	@echo "run: run the program"
build:
	@g++ -c main.cpp
	@g++ -c simple.cpp
	@g++ main.o simple.o
clear:
	@rm *.o
	@rm *.out

run: build
	@./a.out
