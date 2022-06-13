#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char cor[50];
    scanf("%s",cor);

    if(strcmp(cor, "amarelo") == 0 || strcmp(cor, "azul") == 0 || strcmp(cor, "vermelho") == 0){
        printf("primaria\n");
    }
        else if (strcmp(cor, "laranja") == 0 || strcmp(cor, "roxa") == 0 || strcmp(cor, "verde") == 0){
            printf("secundario\n");
        }
            else{
                printf("outra\n");
            }
        
return 0;
}