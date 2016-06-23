#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

vector<int> entrada(string& input)
{
    string aux;                     //string auxiliar, recebe cada número da string original sem os espaços
    int num , i=-1, pos;
    vector<int> v;                  //vetor que vai armazenar os numeros
    while(true)
    {
        if(input.at(++i) != ' ')
        {
            pos = input.find(" ", i);       //find retorna a primeira aparição(a partir de 'i') do espaço
            aux.append(input, i, pos-i);    //anexa/adiciona em aux a substring de input a partir de i com amanho pos-i(length da substring)
            num = stoi(aux);                //converte os numeros da string em inteiros
            v.push_back(num);               //adiciona o numero ao vetor
            aux.clear();                    //limpa a string auxiliar para poder receber novas substrings
            i = pos;                        //i = posição que estava o espaço em branco
            if(i > input.size())
                break;
        }
    }
    return v;
}

int main()
{
    string s;
    cin >> s;
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
		    cout << "BGC " << menor;
			break;
		case 1:
			cout << "BCG " << menor;
			break;
		case 2:
			cout << "GBC " << menor;
			break;
		case 3:
			cout << "GCB " << menor;
			break
		case 4:
			cout << "CBG " << menor;
			break;
		default:
			cout << "CGB " << menor;
	}

	return 16;  // so pra testar, tava dando merda
}
