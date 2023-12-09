#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hashliza.h"
#include "shannon.h"

int main(){
	int VetorMagico[256] = {122, 77, 153, 59, 173, 107, 19, 104, 123, 183, 75, 10,
    114, 236, 106, 83, 117, 16, 189, 211, 51, 231, 143, 118, 248, 148, 218,
    245, 24, 61, 66, 73, 205, 185, 134, 215, 35, 213, 41, 0, 174, 240, 177,
    195, 193, 39, 50, 138, 161, 151, 89, 38, 176, 45, 42, 27, 159, 225, 36,
    64, 133, 168, 22, 247, 52, 216, 142, 100, 207, 234, 125, 229, 175, 79,
    220, 156, 91, 110, 30, 147, 95, 191, 96, 78, 34, 251, 255, 181, 33, 221,
    139, 119, 197, 63, 40, 121, 204, 4, 246, 109, 88, 146, 102, 235, 223,
    214, 92, 224, 242, 170, 243, 154, 101, 239, 190, 15, 249, 203, 162, 164,
    199, 113, 179, 8, 90, 141, 62, 171, 232, 163, 26, 67, 167, 222, 86, 87,
    71, 11, 226, 165, 209, 144, 94, 20, 219, 53, 49, 21, 160, 115, 145, 17,
    187, 244, 13, 29, 25, 57, 217, 194, 74, 200, 23, 182, 238, 128, 103,
    140, 56, 252, 12, 135, 178, 152, 84, 111, 126, 47, 132, 99, 105, 237,
    186, 37, 130, 72, 210, 157, 184, 3, 1, 44, 69, 172, 65, 7, 198, 206,
    212, 166, 98, 192, 28, 5, 155, 136, 241, 208, 131, 124, 80, 116, 127,
    202, 201, 58, 149, 108, 97, 60, 48, 14, 93, 81, 158, 137, 2, 227, 253,
    68, 43, 120, 228, 169, 112, 54, 250, 129, 46, 188, 196, 85, 150, 6, 254,
    180, 233, 230, 31, 76, 55, 18, 9, 32, 82, 70};
    
	// Strings de Teste
		// Teste1 - Simples
	char * Teste1;
	Teste1 = (char *) malloc (32 * sizeof(char));
	char Frase1[] = "Ola mundo!";
	char SaidaPassoUm1[16] = {79, 108, 97, 32, 109, 117, 110, 100, 111, 33, 6, 6, 6, 6, 6, 6};
	char SaidaPassoDois1[32] = {79, 108, 97, 32, 109, 117, 110, 100, 111, 33, 6, 6, 6, 6, 6, 6, 147, 70, 0, 205, 74, 247, 244, 219, 105, 175, 252, 55, 151, 53, 38, 205};
	char SaidaPassoTres1[48] = {126, 162, 49, 155, 224, 208, 56, 144, 129, 97, 180, 232, 194, 107, 252, 122, 194, 53, 21, 66, 190, 179, 174, 146, 84, 143, 170, 129, 200, 98, 35, 92, 209, 123, 47, 192, 63, 184, 225, 80, 61, 23, 150, 202, 180, 27, 57, 216};
	char SaidaPassoQuatroHash1[16] = {126, 162, 49, 155, 224, 208, 56, 144, 129, 97, 180, 232, 194, 107, 252, 122};
    int * TamanhoEsperado;
	TamanhoEsperado = (int *) malloc (48 * sizeof(int));
		// Saida passo 1
	Teste1 = ep1Passo1Preenche(Frase1);
	if(strcmp(Teste1, SaidaPassoUm1)){
		printf("Teste1 - ep1Passo1Preenche compilou corretamente\n");
	}
	else{
		printf("Teste1 - ep1Passo1Preenche não compilou corretamente\n");
	}
		// Saida passo 2
	Teste1 = ep1Passo2XOR(Teste1, VetorMagico, TamanhoEsperado);
	if(strcmp(Teste1, SaidaPassoDois1)){
		printf("Teste1 - ep1Passo2XOR compilou corretamente\n");
	}
	else{
		printf("Teste1 - ep1Passo2XOR não compilou corretamente\n");
	}
		// Saida passo 3
	Teste1 = ep1Passo3Comprime(Teste1, *TamanhoEsperado, VetorMagico);
	if(strcmp(Teste1, SaidaPassoTres1)){
		printf("Teste1 - ep1Passo3Comprime compilou corretamente\n");
	}
	else{
		printf("Teste1 - ep1Passo3Comprime não compilou corretamente\n");
	}
		// Saida passso 4 - Hash
	Teste1 = ep1Passo4Hash(Teste1);
	if(strcmp(Teste1, SaidaPassoQuatroHash1)){
		printf("Teste1 - ep1Passo4Hash compilou corretamente\n");
	}
	else{
		printf("Teste1 - ep1Passo4Hash não compilou corretamente\n");
	}
		// Saida passo 4 - Hexa
	Teste1 = ep1Passo4HashEmHexa(Teste1);
	if(strcmp(Teste1, "7ea2319be0d038908161b4e8c26bfc7a")){
		printf("Teste1 - ep1Passo4HashEmHexa compilou corretamente\n");
	}
	else{
		printf("Teste1 - ep1Passo4HashEmHexa não compilou corretamente\n");
	}
	free(Teste1);
	
		// Teste 2 - Grande Sertão Veredas
	char * Teste2;
	Teste2 = (char *) malloc (400 * sizeof(char));
	char Frase2[] = "Bom, ia falando! questao, isso que me sovaca... Ah, formei aquela pergunta, para compadre meu Quelemem. Que me respondeu! que, por perto do Ceu, a gente se alimpou tanto, que todos os feios passados se exalaram de nao ser - feito sem-modez de tempo de crianca, mas-artes. Como a gente  nao carece de ter remorso do que divulgou no latejo de seus pesadelos de uma noite.";
	char SaidaPassoUm2[384] = {66, 111, 109, 44, 32, 105, 97, 32, 102, 97, 108, 97, 110, 100, 111, 33, 32, 113, 117, 101, 115, 116, 97, 111, 44, 32, 105, 115, 115, 111, 32, 113, 117, 101, 32, 109, 101, 32, 115, 111, 118, 97, 99, 97, 46, 46, 46, 32, 65, 104, 44, 32, 102, 111, 114, 109, 101, 105, 32, 97, 113, 117, 101, 108, 97, 32, 112, 101, 114, 103, 117, 110, 116, 97, 44, 32, 112, 97, 114, 97, 32, 99, 111, 109, 112, 97, 100, 114, 101, 32, 109, 101, 117, 32, 81, 117, 101, 108, 101, 109, 101, 109, 46, 32, 81, 117, 101, 32, 109, 101, 32, 114, 101, 115, 112, 111, 110, 100, 101, 117, 33, 32, 113, 117, 101, 44, 32, 112, 111, 114, 32, 112, 101, 114, 116, 111, 32, 100, 111, 32, 67, 101, 117, 44, 32, 97, 32, 103, 101, 110, 116, 101, 32, 115, 101, 32, 97, 108, 105, 109, 112, 111, 117, 32, 116, 97, 110, 116, 111, 44, 32, 113, 117, 101, 32, 116, 111, 100, 111, 115, 32, 111, 115, 32, 102, 101, 105, 111, 115, 32, 112, 97, 115, 115, 97, 100, 111, 115, 32, 115, 101, 32, 101, 120, 97, 108, 97, 114, 97, 109, 32, 100, 101, 32, 110, 97, 111, 32, 115, 101, 114, 32, 45, 32, 102, 101, 105, 116, 111, 32, 115, 101, 109, 45, 109, 111, 100, 101, 122, 32, 100, 101, 32, 116, 101, 109, 112, 111, 32, 100, 101, 32, 99, 114, 105, 97, 110, 99, 97, 44, 32, 109, 97, 115, 45, 97, 114, 116, 101, 115, 46, 32, 67, 111, 109, 111, 32, 97, 32, 103, 101, 110, 116, 101, 32, 32, 110, 97, 111, 32, 99, 97, 114, 101, 99, 101, 32, 100, 101, 32, 116, 101, 114, 32, 114, 101, 109, 111, 114, 115, 111, 32, 100, 111, 32, 113, 117, 101, 32, 100, 105, 118, 117, 108, 103, 111, 117, 32, 110, 111, 32, 108, 97, 116, 101, 106, 111, 32, 100, 101, 32, 115, 101, 117, 115, 32, 112, 101, 115, 97, 100, 101, 108, 111, 115, 32, 100, 101, 32, 117, 109, 97, 32, 110, 111, 105, 116, 101, 46, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
	char SaidaPassoDois2[400] = {66, 111, 109, 44, 32, 105, 97, 32, 102, 97, 108, 97, 110, 100, 111, 33, 32, 113, 117, 101, 115, 116, 97, 111, 44, 32, 105, 115, 115, 111, 32, 113, 117, 101, 32, 109, 101, 32, 115, 111, 118, 97, 99, 97, 46, 46, 46, 32, 65, 104, 44, 32, 102, 111, 114, 109, 101, 105, 32, 97, 113, 117, 101, 108, 97, 32, 112, 101, 114, 103, 117, 110, 116, 97, 44, 32, 112, 97, 114, 97, 32, 99, 111, 109, 112, 97, 100, 114, 101, 32, 109, 101, 117, 32, 81, 117, 101, 108, 101, 109, 101, 109, 46, 32, 81, 117, 101, 32, 109, 101, 32, 114, 101, 115, 112, 111, 110, 100, 101, 117, 33, 32, 113, 117, 101, 44, 32, 112, 111, 114, 32, 112, 101, 114, 116, 111, 32, 100, 111, 32, 67, 101, 117, 44, 32, 97, 32, 103, 101, 110, 116, 101, 32, 115, 101, 32, 97, 108, 105, 109, 112, 111, 117, 32, 116, 97, 110, 116, 111, 44, 32, 113, 117, 101, 32, 116, 111, 100, 111, 115, 32, 111, 115, 32, 102, 101, 105, 111, 115, 32, 112, 97, 115, 115, 97, 100, 111, 115, 32, 115, 101, 32, 101, 120, 97, 108, 97, 114, 97, 109, 32, 100, 101, 32, 110, 97, 111, 32, 115, 101, 114, 32, 45, 32, 102, 101, 105, 116, 111, 32, 115, 101, 109, 45, 109, 111, 100, 101, 122, 32, 100, 101, 32, 116, 101, 109, 112, 111, 32, 100, 101, 32, 99, 114, 105, 97, 110, 99, 97, 44, 32, 109, 97, 115, 45, 97, 114, 116, 101, 115, 46, 32, 67, 111, 109, 111, 32, 97, 32, 103, 101, 110, 116, 101, 32, 32, 110, 97, 111, 32, 99, 97, 114, 101, 99, 101, 32, 100, 101, 32, 116, 101, 114, 32, 114, 101, 109, 111, 114, 115, 111, 32, 100, 111, 32, 113, 117, 101, 32, 100, 105, 118, 117, 108, 103, 111, 117, 32, 110, 111, 32, 108, 97, 116, 101, 106, 111, 32, 100, 101, 32, 115, 101, 117, 115, 32, 112, 101, 115, 97, 100, 101, 108, 111, 115, 32, 100, 101, 32, 117, 109, 97, 32, 110, 111, 105, 116, 101, 46, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 214, 218, 37, 117, 66, 122, 68, 226, 6, 222, 199, 52, 109, 86, 170, 46};
	char SaidaPassoTres2[48] = {231, 235, 244, 53, 211, 152, 237, 156, 6, 254, 39, 185, 206, 204, 235, 19, 72, 170, 245, 253, 85, 238, 187, 246, 30, 91, 46, 134, 85, 117, 69, 221, 203, 21, 225, 188, 21, 64, 104, 227, 151, 154, 44, 158, 220, 77, 247, 189};
	char SaidaPassoQuatroHash2[16] = {231, 235, 244, 53, 211, 152, 237, 156, 6, 254, 39, 185, 206, 204, 235, 19};
			// Saida passo 1
	Teste2 = ep1Passo1Preenche(Frase2);
	if(strcmp(Teste2, SaidaPassoUm2)){
		printf("Teste2 - ep1Passo1Preenche compilou corretamente\n");
	}
	else{
		printf("Teste2 - ep1Passo1Preenche não compilou corretamente\n");
	}
			// Saida passo 2
	Teste2 = ep1Passo2XOR(Teste2, VetorMagico, TamanhoEsperado);
	if(strcmp(Teste2, SaidaPassoDois2)){
		printf("Teste2 - ep1Passo2XOR compilou corretamente\n");
	}
	else{
		printf("Teste2 - ep1Passo2XOR não compilou corretamente\n");
	}
			// Saida passo 3
	Teste2 = ep1Passo3Comprime(Teste2, *TamanhoEsperado, VetorMagico);
	if(strcmp(Teste2, SaidaPassoTres2)){
		printf("Teste2 - ep1Passo3Comprime compilou corretamente\n");
	}
	else{
		printf("Teste2 - ep1Passo3Comprime não compilou corretamente\n");
	}
			// Saida passso 4 - Hash
	Teste2 = ep1Passo4Hash(Teste2);
	if(strcmp(Teste2, SaidaPassoQuatroHash2)){
		printf("Teste2 - ep1Passo4Hash compilou corretamente\n");
	}
	else{
		printf("Teste2 - ep1Passo4Hash não compilou corretamente\n");
	}
			// Saida passo 4 - Hexa
	Teste2 = ep1Passo4HashEmHexa(Teste2);
	if(strcmp(Teste2, "e7ebf435d398ed9c06fe27b9cecceb13")){
		printf("Teste2 - ep1Passo4HashEmHexa compilou corretamente\n");
	}
	else{
		printf("Teste2 - ep1Passo4HashEmHexa não compilou corretamente\n");
	}
	free(Teste2);
	free(TamanhoEsperado);
	
	// Vetor Mágico de Teste
			// Teste 3 - Seed = 0216
	int * Teste3;
	Teste3 = (int *) malloc (256*sizeof(int));
	int Seed = 216;
	int Vetor[256] = {157, 188, 77, 41, 231, 30, 37, 149, 89, 215, 179, 45, 150, 158, 13, 233, 91, 212, 253, 17, 152, 36, 100, 22, 59, 164, 207, 103, 86, 239, 128, 243, 172, 205, 29, 147, 235, 66, 40, 69, 25, 219, 114, 175, 122, 127, 213, 83, 236, 186, 75, 2, 245, 240, 209, 92, 70, 193, 220, 57, 109, 170, 0, 153, 218, 178, 3, 76, 98, 125, 203, 250, 31, 144, 58, 11, 74, 133, 63, 117, 223, 155, 187, 160, 120, 34, 183, 228, 53, 146, 151, 56, 222, 249, 182, 9, 201, 131, 67, 200, 225, 12, 62, 192, 168, 96, 32, 238, 139, 181, 232, 106, 174, 20, 162, 167, 221, 234, 177, 255, 199, 216, 33, 18, 49, 142, 230, 51, 248, 55, 154, 79, 5, 246, 190, 84, 202, 241, 110, 81, 134, 94, 189, 71, 26, 226, 105, 15, 184, 50, 143, 194, 23, 52, 195, 7, 206, 88, 191, 176, 169, 166, 135, 64, 145, 161, 54, 24, 104, 1, 39, 65, 107, 97, 129, 87, 16, 247, 140, 163, 136, 119, 132, 229, 185, 108, 137, 244, 101, 148, 115, 27, 44, 159, 21, 47, 102, 90, 19, 46, 72, 73, 35, 251, 43, 68, 48, 138, 78, 95, 156, 208, 126, 8, 85, 4, 254, 204, 82, 6, 42, 224, 252, 197, 124, 14, 196, 214, 38, 171, 217, 80, 242, 210, 180, 237, 112, 141, 198, 10, 130, 211, 113, 123, 28, 61, 111, 99, 116, 173, 93, 118, 165, 227, 60, 121};
	Teste3 = ep3CriaVetorMagico(Seed);
	int Igual = 1;
	for(int i = 0; i < 256; i++){
		if( Vetor[i] != Teste3[i]){
			Igual = 0;
		}
	}
	if(Igual == 1){
		printf("Teste3 - ep3CriaVetorMagico compilou corretamente\n");
	}
	else{
		printf("Teste3 - ep3CriaVetorMagico não compilou corretamente\n");
	}
	free(Teste3);
	
	// String de Entropia de Teste
		// Teste 4 - Simples
	long double Entropia;
	char * Teste4;
	Teste4 = (char *) malloc (11*sizeof(char));
	Teste4 = "araraquara";
	Entropia = ep3CalculaEntropiaShannon(Teste4, 2);
	if(abs(Entropia - 1.685475) < 0.000001){
		printf("Teste4 - ep3CalculaEntropiaShannon compilou corretamente\n");
	}
}
