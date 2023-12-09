#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char * ep1Passo1Preenche(char * StringEntrada);

char * ep1Passo2XOR(char * SaidaPassoUm, int * VetorMagico, int * TamanhoEsperado);

char * ep1Passo3Comprime(char * SaidaPassoDois, int TamanhoEsperado, int * VetorMagico);

char * ep1Passo4Hash(char * SaidaPassoTres);

char * ep1Passo4HashEmHexa(char * SaidaPassoQuatroH);

int * ep3CriaVetorMagico(int Seed);
