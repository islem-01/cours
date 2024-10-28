#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,i,j;
 for (i=1;i<=200;i++){
        x=0;
    for (j=2;j<=(i/2);j++){
        if (i%j==0){
            x=1;
        }
    }
    if(x==0){
        printf("%d est premier \n",i);
    }

}
}
