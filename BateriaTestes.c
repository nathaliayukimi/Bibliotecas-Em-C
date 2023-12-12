#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hashliza.h"
#include "shannon.h"
#include <sys/time.h>

int main(){
	struct timeval start, end;
	int VetorMagico[256] = {122, 77, 153, 59, 173, 107, 19, 104, 123, 183, 75, 10,
    114, 236, 106, 83, 117, 16, 189, 211, 51, 231, 143, 118, 248, 148, 218,
    245, 24, 61, 66, 73, 205, 185, 134, 215, 35, 213, 41, 0, 174, 240, 177,
    195, 193, 39, 50, 138, 161, 151, 89, 38, 176, 45, 42, 27, 159, 225, 36,
    64, 133, 168, 22, 247, 52, 216, 142, 100, 207, 234, 125, 229, 175, 79,
    220, 156, 91, 110, 30, 147, 95, 191, 96, 78, 34, 251, 255, 181, 33, 221,
    139, 119, 197, 63, 40, 121, 204, 4, 246, 109, 88, 146, 102, 235, 223,
    214, 92, 224, 242, 170, 243, 154, 101, 239, 190, 15, 249, 203, 162, 164,
    13, 113, 179, 8, 90, 141, 62, 171, 232, 163, 26, 67, 167, 222, 86, 87,
    71, 11, 226, 165, 209, 144, 94, 20, 219, 53, 49, 21, 160, 115, 145, 17,
    187, 244, 13, 29, 25, 57, 217, 194, 74, 200, 23, 182, 238, 128, 103,
    140, 56, 252, 12, 135, 178, 152, 84, 111, 126, 47, 132, 3, 105, 237,
    186, 37, 130, 72, 210, 157, 184, 3, 1, 44, 69, 172, 65, 7, 198, 206,
    212, 166, 98, 192, 28, 5, 155, 136, 241, 208, 131, 124, 80, 116, 127,
    202, 201, 58, 149, 108, 97, 60, 48, 14, 93, 81, 158, 137, 2, 227, 253,
    68, 43, 120, 228, 169, 112, 54, 250, 129, 46, 188, 196, 85, 150, 6, 254,
    180, 233, 230, 31, 76, 55, 18, 9, 32, 82, 70};

// Bateria de Testes 1

	char * String1;
	String1 = (char *) malloc (230*sizeof(char));
	String1 = "Que ao vento do mar se apaga. E o meu caminho comeca nessa franja solitaria, o limite sem vestigio na translucida muralha que opoem o sonho vivido e a vida apenas sonhada";
	gettimeofday(&start, NULL);
	String1 = ep1Passo1Preenche(String1);
	gettimeofday(&end, NULL);
	printf("String1 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String2;
	String2 = (char *) malloc (230*sizeof(char));
	String2 = "E quando estiver cansado Deito na beira do rio mando chamar a mae-dagua pra me contar as historias que no tempo de eu menino Rosa vinha me contar Vou-me embora pra Pasargada";
	gettimeofday(&start, NULL);
	String2 = ep1Passo1Preenche(String2);
	gettimeofday(&end, NULL);
	printf("String2 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String3;
	String3 = (char *) malloc (230*sizeof(char));
	String3 = "Eduardo abriu os olhos , mas , nao quis se levantar. Ficou deitado e viu que horas eram. Enquanto Monica tomava um conhaque, no outro canto da cidade, como eles disseram.";
	gettimeofday(&start, NULL);
	String3 = ep1Passo1Preenche(String3);
	gettimeofday(&end, NULL);
	printf("String3 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String4;
	String4 = (char *) malloc (230*sizeof(char));
	String4 = "Pense, fale, compre, beba Leia, vote, nao se esqueca Use, seja, ouca, diga Tenha, more, gaste, viva Pense, fale, compre, beba Leia, vote, nao se esqueca Use, seja, ouca, diga";
	gettimeofday(&start, NULL);
	String4 = ep1Passo1Preenche(String4);
	gettimeofday(&end, NULL);
	printf("String4 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String5;
	String5 = (char *) malloc (230*sizeof(char));
	String5 = "Deep in the dark , I don t need the light. There s a ghost inside me, It all belongs to the other side. We live, we love, we lie (We live, we love, we lie). Hello, hello.";
	gettimeofday(&start, NULL);
	String5 = ep1Passo1Preenche(String5);
	gettimeofday(&end, NULL);
	printf("String5 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String6;
	String6 = (char *) malloc (230*sizeof(char));
	String6 = "Por vezes, quando acordo de manha, estou chorando. O sonho que devo ter tido, eu nunca consigo lembrar. Mas, a sensacao de que perdi alguma coisa, permanece por algum tempo";
	gettimeofday(&start, NULL);
	String6 = ep1Passo1Preenche(String6);
	gettimeofday(&end, NULL);
	printf("String6 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String7;
	String7 = (char *) malloc (230*sizeof(char));
	String7 = "So lets take this city. Our souls are singing, oh. Can you feel the fire in your bones? I know we won t be defeated. If love is leading, oh. We re laying down our stones.";
	gettimeofday(&start, NULL);
	String7 = ep1Passo1Preenche(String7);
	gettimeofday(&end, NULL);
	printf("String7 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String8;
	String8 = (char *) malloc (230*sizeof(char));
	String8 = "Enquanto ele dormia, mal ele sabia Que la no pa da areia, outro chama de sereia Essa menina solta Essa menina solta (essa menina solta) Enquanto ele dormia, mal ele sabia";
	gettimeofday(&start, NULL);
	String8 = ep1Passo1Preenche(String8);
	gettimeofday(&end, NULL);
	printf("String8 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String9;
	String9 = (char *) malloc (230*sizeof(char));
	String9 = "Eu vou te beijar como um idiota beija Vou me preparar pro dia em que voce ja nao me queira Mas enquanto voce nao se cansa Eu vou te amar como um idiota ama (Uh, uh, idiota)";
	gettimeofday(&start, NULL);
	String9 = ep1Passo1Preenche(String9);
	gettimeofday(&end, NULL);
	printf("String9 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	char * String10;
	String10 = (char *) malloc (230*sizeof(char));
	String10 = "Se sabias que eu era fraco . Mundo mundo vasto mundo se eu me chamasse Raimundo seria uma rima, nao seria uma solucao. Mundo mundo vasto mundo, mais vasto e meu coracao. ";
	gettimeofday(&start, NULL);
	String10 = ep1Passo1Preenche(String10);
	gettimeofday(&end, NULL);
	printf("String10 - ep1Passo1Preenche: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));

// Bateria de Testes 2
	
	int * TamanhoEsperado1;
	TamanhoEsperado1 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String1 = ep1Passo2XOR(String1, VetorMagico, TamanhoEsperado1);
	gettimeofday(&end, NULL);
	printf("String1 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado2;
	TamanhoEsperado2 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String2 = ep1Passo2XOR(String2, VetorMagico, TamanhoEsperado2);
	gettimeofday(&end, NULL);
	printf("String2 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado3;
	TamanhoEsperado3 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String3 = ep1Passo2XOR(String3, VetorMagico, TamanhoEsperado3);
	gettimeofday(&end, NULL);
	printf("String3 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado4;
	TamanhoEsperado4 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String4 = ep1Passo2XOR(String4, VetorMagico, TamanhoEsperado4);
	gettimeofday(&end, NULL);
	printf("String4 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado5;
	TamanhoEsperado5 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String5 = ep1Passo2XOR(String5, VetorMagico, TamanhoEsperado5);
	gettimeofday(&end, NULL);
	printf("String5 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado6;
	TamanhoEsperado6 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String6 = ep1Passo2XOR(String6, VetorMagico, TamanhoEsperado6);
	gettimeofday(&end, NULL);
	printf("String6 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado7;
	TamanhoEsperado7 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String7 = ep1Passo2XOR(String7, VetorMagico, TamanhoEsperado7);
	gettimeofday(&end, NULL);
	printf("String7 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado8;
	TamanhoEsperado8 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String8 = ep1Passo2XOR(String8, VetorMagico, TamanhoEsperado8);
	gettimeofday(&end, NULL);
	printf("String8 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado9;
	TamanhoEsperado9 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String9 = ep1Passo2XOR(String9, VetorMagico, TamanhoEsperado9);
	gettimeofday(&end, NULL);
	printf("String9 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int * TamanhoEsperado10;
	TamanhoEsperado10 = (int *) malloc (230*sizeof(int));
	gettimeofday(&start, NULL);
	String10 = ep1Passo2XOR(String10, VetorMagico, TamanhoEsperado10);
	gettimeofday(&end, NULL);
	printf("String10 - ep1Passo2XOR: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
// Bateria de Testes 3

	gettimeofday(&start, NULL);
	String1 = ep1Passo3Comprime(String1, *TamanhoEsperado1, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String1 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String2 = ep1Passo3Comprime(String2, *TamanhoEsperado2, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String2 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String3 = ep1Passo3Comprime(String3, *TamanhoEsperado3, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String3 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String4 = ep1Passo3Comprime(String4, *TamanhoEsperado4, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String4 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String5 = ep1Passo3Comprime(String5, *TamanhoEsperado5, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String5 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String6 = ep1Passo3Comprime(String6, *TamanhoEsperado6, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String6 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String7 = ep1Passo3Comprime(String7, *TamanhoEsperado7, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String7 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String8 = ep1Passo3Comprime(String8, *TamanhoEsperado8, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String8 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String9 = ep1Passo3Comprime(String9, *TamanhoEsperado9, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String9 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String10 = ep1Passo3Comprime(String10, *TamanhoEsperado1, VetorMagico);
	gettimeofday(&end, NULL);
	printf("String10 - ep1Passo3Comprime: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
// Bateria de Testes 4

	gettimeofday(&start, NULL);
	String1 = ep1Passo4Hash(String1);
	gettimeofday(&end, NULL);
	printf("String1 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String2 = ep1Passo4Hash(String2);
	gettimeofday(&end, NULL);
	printf("String2 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String3 = ep1Passo4Hash(String3);
	gettimeofday(&end, NULL);
	printf("String3 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String4 = ep1Passo4Hash(String4);
	gettimeofday(&end, NULL);
	printf("String4 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String5 = ep1Passo4Hash(String5);
	gettimeofday(&end, NULL);
	printf("String5 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String6 = ep1Passo4Hash(String6);
	gettimeofday(&end, NULL);
	printf("String6 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String7 = ep1Passo4Hash(String7);
	gettimeofday(&end, NULL);
	printf("String7 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String8 = ep1Passo4Hash(String8);
	gettimeofday(&end, NULL);
	printf("String8 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String9 = ep1Passo4Hash(String9);
	gettimeofday(&end, NULL);
	printf("String9 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String10 = ep1Passo4Hash(String10);
	gettimeofday(&end, NULL);
	printf("String10 - ep1Passo4Hash: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
// Bateria de Testes 5

	gettimeofday(&start, NULL);
	String1 = ep1Passo4HashEmHexa(String1);
	gettimeofday(&end, NULL);
	printf("String1 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String2 = ep1Passo4HashEmHexa(String2);
	gettimeofday(&end, NULL);
	printf("String2 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String3 = ep1Passo4HashEmHexa(String3);
	gettimeofday(&end, NULL);
	printf("String3 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String4 = ep1Passo4HashEmHexa(String4);
	gettimeofday(&end, NULL);
	printf("String4 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
		
	gettimeofday(&start, NULL);
	String5 = ep1Passo4HashEmHexa(String5);
	gettimeofday(&end, NULL);
	printf("String5 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String6 = ep1Passo4HashEmHexa(String6);
	gettimeofday(&end, NULL);
	printf("String6 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String7 = ep1Passo4HashEmHexa(String7);
	gettimeofday(&end, NULL);
	printf("String7 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String8 = ep1Passo4HashEmHexa(String8);
	gettimeofday(&end, NULL);
	printf("String8 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String9 = ep1Passo4HashEmHexa(String9);
	gettimeofday(&end, NULL);
	printf("String9 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	gettimeofday(&start, NULL);
	String10 = ep1Passo4HashEmHexa(String10);
	gettimeofday(&end, NULL);
	printf("String10 - ep1Passo4HashEmHexa: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));

// Limpeza
free(TamanhoEsperado1);
free(TamanhoEsperado2);
free(TamanhoEsperado3);
free(TamanhoEsperado4);
free(TamanhoEsperado5);
free(TamanhoEsperado6);
free(TamanhoEsperado7);
free(TamanhoEsperado8);
free(TamanhoEsperado9);
free(TamanhoEsperado10);

// Bateria de Teste 6

	int Seed1 = 7;
	int * VetorMagico1;
	VetorMagico1 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico1 = ep3CriaVetorMagico(Seed1);
	gettimeofday(&end, NULL);
	printf("VetorMagico1 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed2 = 77;
	int * VetorMagico2;
	VetorMagico2 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico2 = ep3CriaVetorMagico(Seed2);
	gettimeofday(&end, NULL);
	printf("VetorMagico2 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed3 = 777;
	int * VetorMagico3;
	VetorMagico3 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico3 = ep3CriaVetorMagico(Seed3);
	gettimeofday(&end, NULL);
	printf("VetorMagico3 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed4 = 7777;
	int * VetorMagico4;
	VetorMagico4 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico4 = ep3CriaVetorMagico(Seed4);
	gettimeofday(&end, NULL);
	printf("VetorMagico4 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed5 = 77777;
	int * VetorMagico5;
	VetorMagico5 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico5 = ep3CriaVetorMagico(Seed5);
	gettimeofday(&end, NULL);
	printf("VetorMagico5 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed6 = 777777;
	int * VetorMagico6;
	VetorMagico6 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico6 = ep3CriaVetorMagico(Seed6);
	gettimeofday(&end, NULL);
	printf("VetorMagico6 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed7 = 7777777;
	int * VetorMagico7;
	VetorMagico7 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico7 = ep3CriaVetorMagico(Seed7);
	gettimeofday(&end, NULL);
	printf("VetorMagico7 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed8 = 77777777;
	int * VetorMagico8;
	VetorMagico8 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico8 = ep3CriaVetorMagico(Seed8);
	gettimeofday(&end, NULL);
	printf("VetorMagico8 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed9 = 777777777;
	int * VetorMagico9;
	VetorMagico9 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico9 = ep3CriaVetorMagico(Seed9);
	gettimeofday(&end, NULL);
	printf("VetorMagico9 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	int Seed10 = -7;
	int * VetorMagico10;
	VetorMagico10 = (int *) malloc (256*sizeof(int));
	gettimeofday(&start, NULL);
	VetorMagico10 = ep3CriaVetorMagico(Seed10);
	gettimeofday(&end, NULL);
	printf("VetorMagico10 - ep3CriaVetorMagico: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
// Bateria de Teste 7

	long double Shannon = 0;

	String1 = "Que ao vento do mar se apaga. E o meu caminho comeca nessa franja solitaria, o limite sem vestigio na translucida muralha que opoem o sonho vivido e a vida apenas sonhada";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String1, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String1 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String2 = "E quando estiver cansado Deito na beira do rio mando chamar a mae-dagua pra me contar as historias que no tempo de eu menino Rosa vinha me contar Vou-me embora pra Pasargada";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String2, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String2 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String3 = "Eduardo abriu os olhos , mas , nao quis se levantar. Ficou deitado e viu que horas eram. Enquanto Monica tomava um conhaque, no outro canto da cidade, como eles disseram.";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String3, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String3 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String4 = "Pense, fale, compre, beba Leia, vote, nao se esqueca Use, seja, ouca, diga Tenha, more, gaste, viva Pense, fale, compre, beba Leia, vote, nao se esqueca Use, seja, ouca, diga";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String4, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String4 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String5 = "Deep in the dark , I don t need the light. There s a ghost inside me, It all belongs to the other side. We live, we love, we lie (We live, we love, we lie). Hello, hello.";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String5, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String5 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String6 = "Por vezes, quando acordo de manha, estou chorando. O sonho que devo ter tido, eu nunca consigo lembrar. Mas, a sensacao de que perdi alguma coisa, permanece por algum tempo";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String6, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String6 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String7 = "So lets take this city. Our souls are singing, oh. Can you feel the fire in your bones? I know we won t be defeated. If love is leading, oh. We re laying down our stones.";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String7, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String7 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String8 = "Enquanto ele dormia, mal ele sabia Que la no pa da areia, outro chama de sereia Essa menina solta Essa menina solta (essa menina solta) Enquanto ele dormia, mal ele sabia";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String8, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String8 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String9 = "Eu vou te beijar como um idiota beija Vou me preparar pro dia em que voce ja nao me queira Mas enquanto voce nao se cansa Eu vou te amar como um idiota ama (Uh, uh, idiota)";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String9, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String9 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
	
	String10 = "Se sabias que eu era fraco . Mundo mundo vasto mundo se eu me chamasse Raimundo seria uma rima, nao seria uma solucao. Mundo mundo vasto mundo, mais vasto e meu coracao. ";
	gettimeofday(&start, NULL);
	Shannon = ep3CalculaEntropiaShannon(String10, 3);
	gettimeofday(&end, NULL);
	printf("%Lf\n", Shannon);
	printf("String10 - ep3CalculaEntropiaShannon: Tempo de execução: %ld microssegundos\n", ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec)));
}
