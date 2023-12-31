#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "shannon.h"

/*!
* \brief Recebe uma string e a base do logaritmo para devolver um real que corresponde à Entropia de Shannon dessa string.
* \param char * StringEntrada : Uma string de tamanho e conteúdo variável.
* \param int Base : Um inteiro positivo que servirá como base do logaritmo para o cálculo da Entropia de Shannon da string.
* \return long double Soma: Um long double que representa a Entropia de Shannon da string de parâmetro.
*/
long double ep3CalculaEntropiaShannon(char * StringEntrada, int Base){
	// Declaração de variáveis
	long double * Freq; // Vetor contador das frequências de cada caracter ASCII
	Freq = (long double *) malloc (128*sizeof(long double));
	long double Tam = strlen(StringEntrada);
	long double Soma = 0;
	long double Prob = 0;

	// Laço da contagem de frequências
	for(int i = 0; i < Tam; i++){
		unsigned char Valor = StringEntrada[i];
		Freq[Valor]++;
	}
	
	// Cálculo da Entropia
	for(int j = 0; j < 128; j++){ 
		if( Freq[j] > 0 ){
			Prob = Freq[j]/Tam;
			Soma = Soma + Prob * (log(Prob) / log(Base));
		}
	}

	if( Soma == 0){
		return Soma;
	}
	Soma = - Soma;
	return Soma;
}
