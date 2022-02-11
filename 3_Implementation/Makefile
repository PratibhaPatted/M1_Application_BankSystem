#Target_name : Dependencies
#<TAB>Command
SRC = main.c
INC = fun.h

all.out : $(SRC)
	gcc $^ -o $@

run: target
	./all.out

clean:
	rm all.out