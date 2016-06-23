#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX_HIGH = 10010;

int main()
{
    int building[3];

    int high[MAX_HIGH];

    string res("");
    stringstream converte;

    int i, j;

    int temp_high = -1;

    for(i = 0; i < MAX_HIGH; i++)
        high[i] = 0;

    for(j = 0; j < 8; j++)
    {
        scanf("%d %d %d", &building[0], &building[1], &building[2]);

        for(i = building[0]; i < building[2]; i++)
            // Define a altura do maior edificio no intervalo
            high[i] = (high[i] > building[1]) ? high[i] : building[1];
    }

    for(i = 0; i < MAX_HIGH; i++)
        if(high[i] != temp_high)
        {
            if(i > 1)
            {
                res += " ";
            }

            converte.str("");
            converte << i;
            res += converte.str();
            res += " ";

            converte.str("");
            converte << high[i];
            res += converte.str();

            temp_high = high[i];
        }

    cout << res << endl;

    return 0;
}
