#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int E[3];                                                      // vetor com a caixa da esquerda
    const int BROWN = 0;

    int M[3];                                                      // vetor com a caixa do meio
    const int CLEAR = 1;

    int D[3];                                                      // vetor com a caida da direita
    const int GREEN = 2;

    int bin;

    int menor;

    char res[4];                                                   // string resposta

    while (scanf("%d %d %d %d %d %d %d %d %d", &E[0], &M[0], &D[0], &E[1], &M[1], &D[1], &E[2], &M[2], &D[2]) != EOF)
    {
        // nao consegui pensar em uma logica para atribuir os valores abaixo, fiz na raca mesmo

        //BCG
        bin = D[BROWN] + M[BROWN] + E[CLEAR] + M[CLEAR] + E[GREEN] + D[GREEN];
        menor = bin;
        strcpy(res, "BCG");

        //BGC
        bin = D[BROWN] + M[BROWN] + E[CLEAR] + D[CLEAR] + E[GREEN] + M[GREEN];
        if (bin < menor)
        {
            menor = bin;
            strcpy(res, "BGC");
        }
        //CBG
        bin = E[BROWN] + M[BROWN] + D[CLEAR] + M[CLEAR] + E[GREEN] + D[GREEN];
        if (bin < menor)
        {
            menor = bin;
            strcpy(res, "CBG");
        }
        //CGB
        bin = E[BROWN] + M[BROWN] + E[CLEAR] + D[CLEAR] + M[GREEN] + D[GREEN];
        if (bin < menor)
        {
            menor = bin;
            strcpy(res, "CGB");
        }
        //GBC
        bin = D[BROWN] + E[BROWN] + D[CLEAR] + M[CLEAR] + E[GREEN] + M[GREEN];
        if (bin < menor)
        {
            menor = bin;
            strcpy(res, "GBC");
        }
        //GCB
        bin = D[BROWN] + E[BROWN] + E[CLEAR] + M[CLEAR] + M[GREEN] + D[GREEN];
        if (bin < menor)
        {
            menor = bin;
            strcpy(res, "GCB");
        }

        printf("%s %d\n", res, menor);
    }

    return 0;
}
