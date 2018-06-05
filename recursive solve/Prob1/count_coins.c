 ///\file count_coins.c
#include "count_coins.h"
///\fn void count_coins()
void count_coins (int suma, int *v, int i, int *out)
{
    ///\brief functie folosita pentru a calcula suma de bani
    if (i < 0)
        return;
    if (suma >= v[i])
    {
        out[i]++;
        count_coins(suma - v[i], v, i, out);
    }
    else
        count_coins(suma, v, i - 1, out);
}
