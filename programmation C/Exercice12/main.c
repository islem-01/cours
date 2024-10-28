#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],min , max ,i ,a , occ;
    float moy ,s=0;
    for(i=0;i<10;i++){
        printf("donner un entier : ");
        scanf("%d",&T[i]);
        s+=T[i];
    }
    moy=s/10;
    max=T[0];
    min=T[0];
    for(i=1;i<10;i++){
      if(max< T[i]){
        max=T[i];

      }
      else{
            if(min>T[i])
            min=T[i];

      }
    }
    printf("le max est %d : ",max);
    printf("le min est %d :",min);
    printf("la somme est %d ",s);
    printf("la moyenne est %f", moy);
    scanf("%d",&T[i]);


    printf("donner un entier a : ");
    scanf("%d",&a);
    for(i=0;i<10;i++){
        if(a==T[i]){
            occ+=1;

        }
        printf("occ est %d ",occ)
    }
}
