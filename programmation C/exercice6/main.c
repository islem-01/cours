#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b , s=0;
    printf("donner un entier a et b : ");
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                somme += i;
            }
        }
    if (a == b && b == a) {
        printf("%d et %d sont des nombres amis.\n", a, b);
    } else {
        printf("%d et %d ne sont pas des nombres amis.\n", a, b);
    }

}
