#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX_HIGH = 10000;

int main()
{
    int building[3];

    int high[MAX_HIGH];

    int i;

    int temp_high = 0;

    for(i = 0; i < MAX_HIGH; i++)
        high[i] = 0;

    while(scanf("%d %d %d", &building[0], &building[1], &building[2]) != EOF)
    {
        for(i = building[0]; i < building[2]; i++)
            // Define a altura do maior edificio no intervalo
            high[i] = (high[i] > building[1]) ? high[i] : building[1];
    }

    for(i = 0; i < MAX_HIGH; i++)
        if(high[i] != temp_high)
        {
            if(i > 1)
                cout << " ";

            cout << i << " " << high[i];
            temp_high = high[i];
        }

    cout << endl;

    return 0;
}
