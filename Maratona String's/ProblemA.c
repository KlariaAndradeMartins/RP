#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, p;
    do{
        scanf("%d %d", &n, &p);

        int x = n/p;
        char lol[x+4];
        lol[0] = 'P';
        for (int i = 1; i< (x+4) - 3; i++){
            lol[i] = 'o';
        }
        lol[(x+4)-1] = 'e';
        lol[(x+4)-2] = 'l';
        lol[(x+4)-3] = 'd';
        for (int j = 0; j < x+4; j++){
            printf("%c", lol[j]);
        }
        printf("\n");
    }while (n != 0 && p != 0);
    
    return 0;
}