#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    int n, cont = 1;
    char t = '#';
    scanf ("%d", &n);

    for (int i = 0; i<= n; i++){
    printf("%c\n", t*cont);
    cont ++;
    return 0;
    }
}