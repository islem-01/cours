#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Saisir un nombre X = ");
    scanf("%d",&x);
    printf("Saisir un nombre y = ");
    scanf("%d",&y);
    while(x!= y){
            if (x>y)
                x=x-y;

            else
                y=y-x;

    }
     printf("le PGCD est %d",x);
}
