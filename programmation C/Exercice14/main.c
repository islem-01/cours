#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float x,y=1;
    printf("donner le reel X = ");
    scanf("%f",&x);
    printf("donner l entier n = " );
    scanf("%d",&n);
    if(n>=0)
        for (i=1;i<=n;i++){
           y=y*x;
    }
    else{
         for (i=1;i<=-n;i++){
           y=y*(1/x);
    }
    printf("%f ^ %d = %f",x,n,y);

}

}
//ecrire un programme qui permeet de calculer x exp n x reel et n entier
// if(n<0){ n=-n ; x=1/x; }for(i=0;i<n;i++){y=y*x}
