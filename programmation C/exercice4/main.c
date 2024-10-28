#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int U1 = 1, U2 = 1, p ;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        printf("U%d = 1\n", n);
    } else {
        for (i = 3; i <= n; i++) {
            p = U1 + U2;
            U1 = U2;
            U2 = p;
        }
        printf("U %d = %d\n", n, U2);
        scanf("%d", &n);
    }

}
