#include<stdio.h>

#define ABSOLUTE1(num) (num)*+1
#define ABSOLUTE2(num) (num)*-1

int main (void){
    int valore; 

    printf ("Inserire il valore da calcolare il valore assoluto\n");
    scanf ("%d", &valore);

    if(valore>0)
        printf ("il valore inserito %d a come valore assoluto %d\n", valore, ABSOLUTE1(valore));
    else
        printf ("il valore inserito %d a come valore assoluto %d\n", valore, ABSOLUTE2(valore));

    return 0;
}