#include <stdio.h>
#include <stdlib.h>

int main()
{
    int racine = 0;
    int impair = 1;
    int nombre;
    int resultat = nombre;
    while (n >= impair) {
        n -= impair;
        impair += 2;
        racine++;
    }
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);

    printf("La racine carrée entière de %d est %d\n", nombre, resultat);
}
