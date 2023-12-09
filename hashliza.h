#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*!
* \brief Recebe uma string e devolve uma nova string que contenha 16n caracteres.
* \param char * StringEntrada: Uma string de tamanho e conteúdo variável.
* \return char * SaidaPassoUm: A mesma string de entrada à diferença de estar preenchida com 16n caracteres. Se o parâmetro não tiver o número de caracteres múltiplo de 16, o espaço faltante será preenchido com o caracter: 16 − TamanhoDaString(x)%16.
*/
char * ep1Passo1Preenche(char * StringEntrada);

/*!
* \brief Recebe uma string que tenha 16n caracteres, junto com um Vetor Mágico de 256 inteiros de 0 a 255 sem repetição e devolve uma nova string com 16(n + 1) caracteres. Além disso, guarda-se o tamanho dessa string num ponteiro.
* \param char * SaidaPassoUm : Uma string com exatamente 16n caracteres. Preferencialmente, a saída da função ep1Passo1Preenche.
* \param int * VetorMagico : Um vetor que contém exatamente 256 inteiros positivos, sem repetição, restritos ao intervalo entre 0 e 255.
* \param int * TamanhoEsperado : Ponteiro de inteiros que armazenará o número de caracteres da string resultante.
* \return char * SaidaPassoDois : Uma string de 16(n + 1) caracteres, obtida a partir de algumas operações.
*/
char * ep1Passo2XOR(char * SaidaPassoUm, int * VetorMagico, int * TamanhoEsperado);

/*!
* \brief Recebe uma string que tenha 16(n + 1) caracteres, junto com um vetor Mágico de 256 inteiros de 0 a 255 sem repetição e o tamanho esperado para essa string e devolve uma nova string de exatamente 48 caracteres.
* \param char * SaidaPassoDois : Uma string com 16(n + 1) caracteres. Preferencialmente, a saída da função ep1Passo2XOR.
* \param int TamanhoEsperado : O valor que, supostamente, SaidaPassoDois possui. Serve para evitar confusões quanto a possíveis '0's na string.
* \param int * VetorMagico : Um vetor que contém exatamente 256 inteiros positivos, sem repetição, restritos ao intervalo entre 0 e 255.
* \return char * SaidaPassoTres : Uma string de 48 caracteres, obtida a partir de algumas operações.
*/
char * ep1Passo3Comprime(char * SaidaPassoDois, int TamanhoEsperado, int * VetorMagico);

/*!
* \brief Recebe uma string de 48 caracteres e devolve uma nova string com os exatos primeiros 16 caracteres da String de Entrada.
* \param char * SaidaPassoQuatroH : Uma string com mais de 16 caracteres. Preferencialmente, a saída da função ep1Passo3Comprime.
* \return char * SaidaPassoQuatroH : Uma string que contém os 16 primeiros caracteres da string de entrada.
*/
char * ep1Passo4Hash(char * SaidaPassoTres);

/*!
* \brief Recebe uma string de 16 caracteres e devolve uma string de 32 caracteres com a sua representação em hexadecimal.
* \param char * SaidaPassoQuatroH : Uma string com exatamente 16 caracteres. Preferencialmente, a saída da função ep1Passo4Hash.
* \return char * Hash : Uma string que devolve cada caracter de entrada em sua respectiva forma hexadecimal.
*/
char * ep1Passo4HashEmHexa(char * SaidaPassoQuatroH);

/*!
* \brief Recebe um inteiro e usa ele como semente para devolver um vetor pseudo-aleatório de 256 inteiros de 0 a 255 sem repetição.
* \param int Seed : Um inteiro que garantirá a mesma geração de um vetor pseudo-aleatório, toda vez que a função for executada com esse mesmo número.
* \return int * VetorMagico : Um vetor de inteiros, não repetidos, cujos valores estão restritos ao intervalo de 0 a 255.
*/
int * ep3CriaVetorMagico(int Seed);
