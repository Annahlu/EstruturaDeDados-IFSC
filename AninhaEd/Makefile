SRC = ./
INC = -I ./headers
FLAGS = -Wall -Werror -g
OUTPUT = TrabalhoED
OUT = ./obj

main:
	gcc -c $(SRC)/main.c $(INC) $(FLAGS) -o $(OUT)/main.o

loja: 
	gcc -c $(SRC)/loja.c $(INC) $(FLAGS) -o $(OUT)/loja.o

pilha: 
	gcc -c $(SRC)/pilha.c $(INC) $(FLAGS) -o $(OUT)/pilha.o

lista: 
	gcc -c $(SRC)/lista.c $(INC) $(FLAGS) -o $(OUT)/lista.o
  
all: main loja pilha lista 
	gcc $(OUT)/*.o $(INC) $(FLAGS) -o $(OUTPUT)

run: all
	./$(OUTPUT)