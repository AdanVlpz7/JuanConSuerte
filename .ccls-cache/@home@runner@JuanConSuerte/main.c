#include <stdio.h>
#include <stdlib.h>
#define APUESTA 4
int obtenerGanancia(int d1, int d2, int d3){
  int c = 0;
  if(APUESTA == d1)
    c++;
  if(APUESTA == d2)
    c++;
  if(APUESTA == d3)
    c++;  
  if(c > 0)
    return c;
  else
    return -1;
}

int main(void) {

  int d1;
  int d2;
  int d3;
  int ganancia = 0;

  printf("En este programa se apuesta con 4 :D\n");
  for(int i = 0; i < 100; i++){
    printf("Lanzamiento %d: ",i+1);
    d1 = rand() % 6;
    d2 = rand() % 6;
    d3 = rand() % 6;
    printf(" |%d| ",d1);
    printf(" |%d| ",d2);
    printf(" |%d| ",d3);
    printf(" Ganancia: %d", obtenerGanancia(d1,d2,d3));
    ganancia += obtenerGanancia(d1,d2,d3);
    printf("\n");
  }

  printf("\nLa ganancia de Juan es: %d",ganancia);
}