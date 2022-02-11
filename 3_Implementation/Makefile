#Target_name : Dependencies
#<TAB>Command
SRC = src/main.c
INC = inc

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all.out : $(SRC)
	gcc $^ -I$(INC) -o $@

run: target
	./all.out

clean:
	rm all.out