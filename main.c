/*
 * main.c
 * Resposta do exercício 5 do capítulo 3.
 * Author: Thiago Leite
 */

#define TAMANHO 5
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int inteiros[TAMANHO][TAMANHO];

	inteiros[0][0] = 15;
	inteiros[0][1] = 89;
	inteiros[0][2] = -37;
	inteiros[0][3] = 89;
	inteiros[0][4] = -56;
	inteiros[1][0] = -99;
	inteiros[1][1] = -46;
	inteiros[1][2] = 22;
	inteiros[1][3] = 55;
	inteiros[1][4] = 69;
	inteiros[2][0] = -150;
	inteiros[2][1] = 569;
	inteiros[2][2] = 148;
	inteiros[2][3] = 11;
	inteiros[2][4] = -973;
	inteiros[3][0] = 258;
	inteiros[3][1] = -875;
	inteiros[3][2] = 937;
	inteiros[3][3] = -485;
	inteiros[3][4] = 547;
	inteiros[4][0] = 359;
	inteiros[4][1] = 453;
	inteiros[4][2] = -957;
	inteiros[4][3] = 719;
	inteiros[4][4] = -853;

	int i, j;
	int maior = 0;
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {

			if (maior < inteiros[i][j])
				maior = inteiros[i][j];
		}
	}

	printf("O maior elemento da matriz é %d.", maior);

}
