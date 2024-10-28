#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,p=1;
    int n,i;
    printf("donner un entier n : ");
    scanf("%d",&n);
    printf("donner un reel x : ");
    scanf("%d",&x);

    if (n>=0){
    for(i=1;i<=n;i++){
         x=x*i;

      }
    }
    else {
        for (i = 0; i < -n; i++) {
            p /= x;
        }
    }

    printf("La valeur de x^n est : %.6lf\n", p);
    scanf("%d",&x);
}
