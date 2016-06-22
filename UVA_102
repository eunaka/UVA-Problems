#include <stdio.h>
#include <stdlib.h>

int main()
{
	int garrafas[] = {1,2,3,4,5,6,7,8,9};                          // Este vetor que vai receber os valores inteiros da string, implementar essa conversao

	int e[3];                                                      // vetor com a caixa da esquerda
	const int brow = 0;

	int m[3];                                                      // vetor com a caixa do meio
	const int green = 1;

	int d[3];                                                      // vetor com a caida da direita
	const int clear = 2;

	int bin[6];                                                    // vetor das possibilidades, como sao 3 caixas, ha 6 possibilidades

	int i, j = 0;
	int menor;

	for(i = 0; i < 3; i++)
	{
		e[i] = garrafas[i];
		m[i] = garrafas[i+3];
		d[i] = garrafas[i+6];
	}



	// nao consegui pensar em uma logica para atribuir os valores abaixo, fiz na raca mesmo

	// BGC
	bin[0] = m[brow] + d[brow] + e[green] + d[green] + e[clear] + m[clear];

	// BCG
	bin[1] = m[brow] + d[brow] + e[clear] + d[clear] + e[green] + m[green];

	// GBC
	bin[2] = m[green] + d[green] + e[brow] + d[brow] + e[clear] + m[clear];

	// GCB
	bin[3] = m[green] + d[green] + e[clear] + d[clear] + e[brow] + m[brow];

	// CBG
	bin[4] = m[clear] + d[clear] + e[brow] + d[brow] + e[green] + m[green];

	// CGB
	bin[5] = m[clear] + d[clear] + e[green] + d[green] + e[brow] + m[brow];


	menor = bin[0];
    for(i = 0; i < 6; i++)
    {
        if(bin[i] < menor)
		{
			menor = bin[i];
			j = i;
		}
    }

	switch(j)
	{
		case 0:
			printf("BGC %d", menor);
			break;
		case 1:
			printf("BCG %d", menor);
			break;
		case 2:
			printf("GBC %d", menor);
			break;
		case 3:
			printf("GCB %d", menor);
			break;
		case 4:
			printf("CBG %d", menor);
			break;
		default:
			printf("CGB %d",j, menor);
	}

	return 16;  // so pra testar, tava dando merda
}
