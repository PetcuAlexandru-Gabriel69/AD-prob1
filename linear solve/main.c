///\file main.c
/// Created by Petcu Alexandru-Gabriel  on 05/6/18
#include <stdio.h>

int main(){
    int moneysum;
    ///\brief int moneysum - Suma de bani
    int coins50=0;
    ///\brief int coins50 - monede de 50 bani
    int coins10=0;
    ///\brief int coins10-monede de 10 bani
    int coins5=0;
    ///\brief int coins5 - monede de 5 bani
    int coins1=0;
    ///\brief int coins1 - monede de 1 ban
    printf("Introduceti bani $$: ");
    scanf("%d",&moneysum);
    while(moneysum!=0){
        if(moneysum>=50){
            moneysum=moneysum-50;
            coins50++;
        }
        else
            if(moneysum>=10){
                moneysum=moneysum-10;
                coins10++;
            }
        else
            if(moneysum>=5){
                moneysum=moneysum-5;
                coins5++;
            }
            else
                if(moneysum>=1){
                    moneysum=moneysum-1;
                    coins1++;
                }

    }
    printf("coins50 : %d\ncoins10 : %d\ncoins5 : %d\ncoins1 : %d\n",coins50,coins10,coins5,coins1);
}
