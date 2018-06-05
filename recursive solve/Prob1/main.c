///\file main.c
/// Created by Petcu Alexandru-Gabriel on 5/6/18
#include <stdio.h>
#include <stdlib.h>
#include "count_coins.h"


///\fn int main()
int main()
{
    int suma;
    ///\brief int suma - suma de bani
    int v[4] = {1, 5, 10, 50};
    ///\brief int v[4] - monedele
    int out[4] = {0};
    ///\brief out[4] - numarul de monezi
    int i;
    ///\brief int i - vectorul care retine numarul de bani
    printf ("Introduceti suma de bani :");
    scanf ("%d", &suma);
    count_coins(suma, v, 3, out);
    for (i = 0; i < 4; i++)
        printf ("Coin: %d x %d\n", v[i], out[i]);
    return 0;
}
