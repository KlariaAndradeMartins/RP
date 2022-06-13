#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (void) {
  float x, y, troco;
  scanf("%f %f" , &x, &y);

  int Figurinha = x/y;

  float Troco =  x - (Figurinha*y);

  printf("%d %.2f\n", Figurinha, Troco);
  return 1; 
  }