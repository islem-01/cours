#include <stdio.h>
#include <stdlib.h>

int main()
{
          int i, n, som ;
            som = 0 ;

        i=0;
        do
        {
        printf ("donnez un entier ") ;
        scanf ("%d", &n) ;
            i++;
            som += n ;
        }while(i<4);
        printf("Somme : %d\n", som);
        scanf ("%d", &n) ;

}

#nclude <stdio.h>

#int main() {
#    int i = 0, n, som = 0;
#    while (i < 4) {
#        printf("Donnez un entier: ");
#        scanf("%d", &n);
#        som += n;
#        i++;
#    }
#    printf("Somme : %d\n", som);
#    return 0;
#}
#
