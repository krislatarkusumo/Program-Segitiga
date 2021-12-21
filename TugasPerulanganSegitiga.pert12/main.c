#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,j;                         //variabel
    int x,y;
    int a,b,c;

   for(i=1;i<=10;i++){               //segitiga siku siku
        for(j=1;j<=i;j++){
            printf("*");
      }
      printf("\n");
   }
    printf("\n\n\n");

    goto next;

    next:
    for(x=1;x<=10;x++){              //segitiga siku siku terbalik
        for(y=10;y>=x;y--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    goto next2;

    next2:
       for(a=1;a<=10;a++){              //segitiga sama kaki
            for(c=1;c<=10-a;c++){
                printf(" ");
            }
                for(b=1;b<=a+(a-1);b++){
                    printf("*");
        }
            printf("\n");
    }
}
