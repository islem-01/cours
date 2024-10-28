#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n , s=0 ,  i=1;
  double moy ;

  do{
    printf("Donner un entier positif : ");
    scanf("%d",&n);

    if(n>=0){
        s=s+n;
        i++;
    }
  }while(n>=0);
    if (i != 0) {
            moy = (double)s / i;
            printf("La moyenne de ces %d entiers vaut : %.6lf\n", i, moy);
            scanf("%d",&n);

        } else {
            printf("Aucun entier positif n'a été saisi.\n");
            scanf("%d",&n);

        }
}
