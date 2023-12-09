#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*!
* \brief Recebe uma string e a base do logaritmo para devolver um real que corresponde à Entropia de Shannon dessa string.
* \param char * StringEntrada : Uma string de tamanho e conteúdo variável.
* \param int Base : Um inteiro positivo que servirá como base do logaritmo para o cálculo da Entropia de Shannon da string.
* \return long double Soma: Um long double que representa a Entropia de Shannon da string de parâmetro.
*/
long double ep3CalculaEntropiaShannon(char * StringEntrada, int Base);
