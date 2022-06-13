#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprirString(char palavra[]){
    int i = 0;

    while(palavra[i] != '\0'){
        printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}

int main (){
    //Numeros de linhas
    int n; 
    scanf ("%d", &n); 

    //Variaveis 
    char palavra[50];

    //Pegar a palavra
    for (int i = 0; i<n; i++){

        printf("Introduza uma palavra\n");
        gets(palavra);
        // Acabou a maratona.
    }

 return 0;   
}