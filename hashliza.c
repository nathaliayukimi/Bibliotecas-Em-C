#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hashliza.h"
/*!
* \brief Recebe uma string e devolve uma nova string que contenha 16n caracteres.
* \param char * StringEntrada: Uma string de tamanho e conteúdo variável.
* \return char * SaidaPassoUm: A mesma string de entrada à diferença de estar preenchida com 16n caracteres. Se o parâmetro não tiver o número de caracteres múltiplo de 16, o espaço faltante será preenchido com o caracter: 16 − TamanhoDaString(x)%16.
*/
char * ep1Passo1Preenche(char * StringEntrada){
	// Verificação do parâmetro
	if( StringEntrada == NULL ){ // Se a string é vazia
		return NULL;
	}
	for(int h = 0; h < strlen(StringEntrada); h++){ // Elementos da tabela ASCII vão de 0 a 127
		if( StringEntrada[h] < 0 || StringEntrada[h] > 127 ){ // Caso contrário, não é caractere
			return NULL; // Portanto, não é string
		}
	}
	
	// Declaração de variáveis
	unsigned int Tam = strlen(StringEntrada); // Tamanho da string
	unsigned char Val = 16 - (Tam % 16); // Valor que será usado para preenchimento
	char * SaidaPassoUm; // Array de saída da função
	SaidaPassoUm = (char *) malloc ((Tam + 16 - (Tam % 16) + 1)*sizeof(char)); // Alocação devida de memória
	
	// Alocação da String de parâmetro
	for(int i = 0; i < Tam; i++){
		SaidaPassoUm[i] = StringEntrada[i]; // Inserção do respectivo valor
	}

	// Verificação do tamanho da String, isto é, se ela tem tamanho 16n
	if( Tam % 16 != 0 ){ // Caso não seja, é necessário complementar
		// Introdução a um laço de inserção no array auxiliar:
		for(int j = Tam; j < Tam + 16 - (Tam % 16); j++){
			SaidaPassoUm[j] = Val; // Inserção do respectivo valor
		}
	}
	
	SaidaPassoUm[Tam] = 0;

	return SaidaPassoUm;
}	

/*!
* \brief Recebe uma string que tenha 16n caracteres, junto com um Vetor Mágico de 256 inteiros de 0 a 255 sem repetição e devolve uma nova string com 16(n + 1) caracteres. Além disso, guarda-se o tamanho dessa string num ponteiro.
* \param char * SaidaPassoUm : Uma string com exatamente 16n caracteres. Preferencialmente, a saída da função ep1Passo1Preenche.
* \param int * VetorMagico : Um vetor que contém exatamente 256 inteiros positivos, sem repetição, restritos ao intervalo entre 0 e 255.
* \param int * TamanhoEsperado : Ponteiro de inteiros que armazenará o número de caracteres da string resultante.
* \return char * SaidaPassoDois : Uma string de 16(n + 1) caracteres, obtido a partir de algumas operações.
*/
char * ep1Passo2XOR(char * SaidaPassoUm, int * VetorMagico, int * TamanhoEsperado){
	// Verificação dos parâmetros
		// Verificação da string
	if( SaidaPassoUm == NULL ){ // Se a string é vazia
		return NULL;
	}
	for(int g = 0; g < strlen(SaidaPassoUm); g++){ // Elementos da tabela ASCII vão de 0 a 127
		if( SaidaPassoUm[g] < 0 || SaidaPassoUm[g] > 127 ){ // Caso contrário, não é caractere
			return NULL; // Portanto, não é string
		}
	}
		// Verificação do vetor mágico
	if( VetorMagico == NULL){ // Vetor mágico é vazio
		return NULL;
	}
	int VetDeNum[256] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; // Vetor auxiliar
 	for(int h = 0; h < 256; h++){
 		if( VetDeNum[h] != -1 ){
 			return NULL; // Se houver valores repetidos, ele retorna como nulo.
 		}
 		if( VetorMagico[h] < 0 || VetorMagico[h] > 255 ){
 			return NULL; // Se houver valores fora do intervalo 0 a 255
 		}
 		VetDeNum[h] = h;
 	}
 		// Verificação do ponteiro
 	if( TamanhoEsperado == NULL ){
 		return NULL;
 	}
	
	// Declaração de variáveis
	unsigned int Tam = strlen(SaidaPassoUm); // Tamanho da String original
	unsigned int NBlocos = Tam / 16; // Número de blocos 16n que a String contém
	unsigned char NovoValor = 0; // Valor intermediário para as operações
	unsigned char NovoBloco[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Bloco Intermediário das operações
	char * SaidaPassoDois; // Array de saída da função
	SaidaPassoDois = (char *) malloc ((Tam + 17)*sizeof(char)); // Alocação devida de memória
	
	// Laço do cálculo e da concatenação
	for(int i = 0; i < NBlocos; i++){
		for(int j = 0; j < 16; j++){
			NovoValor = VetorMagico[ (SaidaPassoUm[ i * 16 + j ] ^ NovoValor) ] ^ NovoBloco[j];
			NovoBloco[j] = NovoValor;
		}
	}
	
	// Concatenação das listas
	for(int k = 0; k < Tam; k++){ // Concatenação da SaidaPassoUm
		SaidaPassoDois[k] = SaidaPassoUm[k];
	}
	for(int l = Tam; l < Tam + 16; l++){ // Concatenação do NovoBloco
		SaidaPassoDois[l] = NovoBloco[l - Tam];
	}
	
	// Tamanho da SaidaPasssoDois
	*TamanhoEsperado = Tam + 16;
	
	SaidaPassoDois[Tam + 16] = 0;

	return SaidaPassoDois;
}

/*!
* \brief Recebe uma string que tenha 16(n + 1) caracteres, junto com um vetor Mágico de 256 inteiros de 0 a 255 sem repetição e o tamanho esperado para essa string e devolve uma nova string de exatamente 48 caracteres.
* \param char * SaidaPassoDois : Uma string com 16(n + 1) caracteres. Preferencialmente, a saída da função ep1Passo2XOR.
* \param int TamanhoEsperado : O valor que, supostamente, SaidaPassoDois possui. Serve para evitar confusões quanto a possíveis '0's na string.
* \param int * VetorMagico : Um vetor que contém exatamente 256 inteiros positivos, sem repetição, restritos ao intervalo entre 0 e 255.
* \return char * SaidaPassoTres : Uma string de 48 caracteres, obtida a partir de algumas operações.
*/
char * ep1Passo3Comprime(char * SaidaPassoDois, int TamanhoEsperado, int * VetorMagico){
	// Verificação dos parâmetros
		// Verificação da string
	if( SaidaPassoDois == NULL ){ // Se a string é vazia
		return NULL;
	}
		// Verificação do inteiro
	if( sizeof(TamanhoEsperado) != 4 ){ // Um inteiro tem 4 bytes
		return NULL;
	} 
	if( TamanhoEsperado <= 0 ){ // Número não positivo
		return NULL;
	}
		// Verificação do vetor mágico
	if( VetorMagico == NULL){ // Vetor mágico é vazio
		return NULL;
	}
	int VetDeNum[256] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; // Vetor auxiliar
 	for(int h = 0; h < 256; h++){
 		if( VetDeNum[h] != -1 ){
 			return NULL; // Se houver valores repetidos, ele retorna como nulo.
 		}
 		if( VetorMagico[h] < 0 || VetorMagico[h] > 255 ){
 			return NULL; // Se houver valores fora do intervalo 0 a 255
 		}
 		VetDeNum[h] = h;
 	}
	
	// Declaração de variáveis
	char * SaidaPassoTres; // String Resultante
	SaidaPassoTres = (char *) malloc (49*sizeof(char));
	unsigned int NBlocos = TamanhoEsperado / 16; // Número de blocos 16n que a String contém
	
	// Laço de Compressão 
	for(int i = 0; i < NBlocos; i++){
		for(int j = 0; j < 16; j++){
			SaidaPassoTres[16 + j] = SaidaPassoDois[i * 16 + j];
			SaidaPassoTres[32 + j] = SaidaPassoTres[16 + j]^SaidaPassoTres[j];
		}
		unsigned char Temp = 0;
		for(int j = 0; j < 18; j++){
			for(int k = 0; k < 48; k++){
				Temp = SaidaPassoTres[k]^VetorMagico[Temp];
				SaidaPassoTres[k] = Temp;
			}
			Temp = (Temp +j) % 256;
		}
	}
	SaidaPassoTres[48] = 0;
	
	return SaidaPassoTres;
}

/*!
* \brief Recebe uma string de 48 caracteres e devolve uma nova string com os exatos primeiros 16 caracteres da String de Entrada.
* \param char * SaidaPassoQuatroH : Uma string com mais de 16 caracteres. Preferencialmente, a saída da função ep1Passo3Comprime.
* \return char * SaidaPassoQuatroH : Uma string que contém os 16 primeiros caracteres da string de entrada.
*/
char * ep1Passo4Hash(char * SaidaPassoTres){
	// Verificação do parâmetro
	if( SaidaPassoTres == NULL ){ // Se a string é vazia
		return NULL;
	}	
	// Declaração de variáveis
	char * SaidaPassoQuatroH; // String resultante
	SaidaPassoQuatroH = (char *) malloc (16*sizeof(char));
	
	// Laço de extração
	for( int i = 0; i < 16; i++){ // Extrai oss 16 primeiros bytes
		SaidaPassoQuatroH[i] = SaidaPassoTres[i];
	}
	
	return SaidaPassoQuatroH;
}

/*!
* \brief Recebe uma string de 16 caracteres e devolve uma string de 32 caracteres com a sua representação em hexadecimal.
* \param char * SaidaPassoQuatroH : Uma string com exatamente 16 caracteres. Preferencialmente, a saída da função ep1Passo4Hash.
* \return char * Hash : Uma string que devolve cada caracter de entrada em sua respectiva forma hexadecimal.
*/
char * ep1Passo4HashEmHexa(char * SaidaPassoQuatroH){
	// Verificação do parâmetro
	if( SaidaPassoQuatroH == NULL ){ // Se a string é vazia
		return NULL;
	}
	// Declaração de variáveis
	char * Hash; // String Resultante
	Hash = (char *) malloc (32*sizeof(char));
	
	// Laço de transformação em Hexadecimal
	for(int i = 0; i < 16; i++){
		unsigned char byte = SaidaPassoQuatroH[i];
		unsigned char H1 = byte % 16; // A parte das "unidades" é o resto do byte por 16
		unsigned char H2 = (byte - H1)/ 16; // A parte das "dezenas" é a divisão inteira
		
		// Analisador
		if( H1 < 10){
			if( H2 < 10){ // Se os valores são menores do que 10, então, os valores se mantêm
				Hash[2 * i + 1] = H1 + 48;
				Hash[2 * i] = H2 + 48;
			}
			else{
				Hash[2 * i + 1] = H1 + 48; // Caso contrário, transformamos em letras
				Hash[2 * i] = H2 + 87;
			}
		}
		else{
			if( H2 < 10){
				Hash[2 * i + 1] = H1 + 87;
				Hash[2 * i] = H2 + 48;
			}
			else{
				Hash[2 * i + 1] = H1 + 87;
				Hash[2 * i] = H2 + 87;
			}
		}
	}
	
	return Hash;
}

/*!
* \brief Recebe um inteiro e usa ele como semente para devolver um vetor pseudo-aleatório de 256 inteiros de 0 a 255 sem repetição.
* \param int Seed : Um inteiro que garantirá a mesma geração de um vetor pseudo-aleatório, toda vez que a função for executada com esse mesmo número.
* \return int * VetorMagico : Um vetor de inteiros, não repetidos, cujos valores estão restritos ao intervalo de 0 a 255.
*/
int * ep3CriaVetorMagico(int Seed){
	// Verificação do parâmetro
	if( sizeof(Seed) != 4 ){ // Um inteiro tem 4 bytes 
		return NULL;
	}
	
	// Declaração de variáveis
	int * VetorMagico; // String Resultante
	VetorMagico = (int *) malloc (256 * sizeof(int));
	int VetDeNum[256] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; // Vetor auxiliar
	int i = 0; // Contador do laço
	
	// Definição e ancoragem da semente
	srand(Seed);
	
	// Laço de criação
	while( i < 256){
		int Valor = rand() % 256; // O número está restrito entre 0 a 255
		
		// Condição de não repetição de valores
		if( VetDeNum[Valor] == -1 ){ // Se ainda não saiu esse número, ele estará marcado com o valor -1
			VetDeNum[Valor] = Valor; // A posição é marcada
			VetorMagico[i] = Valor; // O vetor é preenchido
			i++;
		}
	}
	
	return VetorMagico;
}
