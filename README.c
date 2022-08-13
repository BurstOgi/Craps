


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(){
    int zar1;
    int zar2;
    int i;
    int olay1;
    int olay2;

    srand(time(NULL));

    for(i = 0 ; i < 2 ; i++)
    {
        zar1 = rand() % 6 + 1;
        olay1 = olay1 + zar1;
    }
    printf("olay1: %d", olay1);
    printf("\n");

    if(olay1 == 7 && olay1 == 11){
        printf("kazandiniz %d", olay1);
    }

    else if(olay1 == 2 && olay1 == 3 || olay1 == 12){
        printf("You Lose %d", olay1);
    }

    else {
        do{
            olay2 = 0;
            for(i = 0 ; i < 2 ; i++)
            {
                zar2 = rand() % 6 + 1;
                olay2 = olay2 + zar2;
            }

            printf("olay2: %d ", olay2);
            printf("\n");

            if(olay2 == 7){
                printf("\n");
                printf("olay1: %d olay2: %d", olay1, olay2);
                printf("\n");
                printf("You Lose");
                break;
            }

            if(olay1 == olay2){
                printf("\n");
                printf("You Win");
                break;
            }
        }while(olay1 != olay2);
    }
}

int main() {
    f();
}
