INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I$(INC_DIR)
ARCHIVE = ar

linux: mbasic.a mbasic.so math_estatico math_dinamico

mbasic.a: $(SRC_DIR)/mbasic.cpp $(INC_DIR)/mbasic.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/mbasic.cpp -o $(OBJ_DIR)/mbasic.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/mbasic.o
	@echo "---- [Bibilioteca estática criada em $(LIB_DIR)/$@] ----"

mbasic.so: $(SRC_DIR)/mbasic.cpp $(INC_DIR)/mbasic.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/mbasic.cpp -o $(OBJ_DIR)/mbasic.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/mbasic.o
	@echo "---- [Bibilioteca dinâmica criada em $(LIB_DIR)/$@] ----"

math_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.a -o $(OBJ_DIR)/$@

math_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.so -o $(OBJ_DIR)/$@

clean:
	@echo "Removendo arquivos executáveis"
	@rm -rf $(OBJ_DIR)/*