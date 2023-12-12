#!/bin/bash

function Verifica { # Caso a compilação não esteja de acordo, ela se encerra
	if [ $? -ne 0 ]; then
		echo "A compilação falhou"
		exit 1
	fi
}

# Compilação da Biblioteca Estática
gcc -Wall -c -o hashliza.o hashliza.c
Verifica
ar -rcv libhashliza.a hashliza.o

# Compilação da Biblioteca Dinâmica
gcc -c -fPIC -o shannon.o shannon.c -lcurl
Verifica
gcc -o libshannon.so -shared shannon.o -lcurl
Verifica

# Compilação do Executável linkando as bibliotecas
# Biblioteca Estática
gcc -Wall -c -o testa.o testa.c
Verifica
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${PWD}
gcc -Wall -o testa hashliza.o testa.o -L${PWD} -lshannon -lm
Verifica

# Criação do Doxygen
doxygen Doxyfile

# remoção de arquivos fúteis
rm hashliza.o
rm shannon.o
rm testa.o

# Execução do programa de testes.
./testa

exit 0
