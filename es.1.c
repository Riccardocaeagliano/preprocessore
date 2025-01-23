#include<stdio.h>
#define Lire_Euro(Lire) (Lire)/1936.36
#define Euro_Lire(Euro) (Euro)*1936.36
int main (void){
    float valore; 
    char scelta;
    printf ("digita:\n");
    printf ("a) da lire a euro\n");
    printf ("b) da euro a lire\n");
    scanf ("%c", &scelta);
    printf ("Inserire il valore da trasformare\n");
    scanf ("%f", &valore);
    switch (scelta){
        case 'a':
            printf ("le seguenti lire: %f in euro corispondono a %f\n", valore, Lire_Euro (valore)  );
            break;
        case 'b':
            printf ("i seguenti euri: %f in lire corispondono a: %f\n", valore, Euro_Lire (valore)  );
            break;
        default:
            printf ("conversione non riconosciuta\n");
    }
    return 0;
} 