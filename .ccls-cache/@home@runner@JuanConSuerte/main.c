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
  printf("@author: Miguel Adan Vargas Lopez\n");
  srand(time(NULL));
  int f1 = 0,f2 = 0,f3= 0, f4 = 0;
  int d1;
  int d2;
  int d3;
  int ganancia = 0;
  int temp = 0;
  printf("En este programa se apuesta con '4' :D\n");
  for(int i = 0; i < 100; i++){
    printf("Lanzamiento %d: ",i+1);
    d1 = rand() % 6;
    d2 = rand() % 6;
    d3 = rand() % 6;
    printf(" |%d| ",d1);
    printf(" |%d| ",d2);
    printf(" |%d| ",d3);
    temp = obtenerGanancia(d1,d2,d3);
    printf(" Ganancia: %d", temp);
    ganancia += temp;
    if(temp == -1)
      f1++;
    else if(temp == 1)
      f2++;
    else if(temp == 2)
      f3++;
    else if(temp == 3)
      f4++; 
    printf("\n");
  }

  printf("\nLa ganancia de Juan es: %d",ganancia);
  printf("\nFrecuencia de Perdida |-1| : %d\n",f1);
  printf("Frecuencia de Ganancia |1| : %d\n",f2);
  printf("Frecuencia de Ganancia |2| : %d\n",f3);
  printf("Frecuencia de Ganancia |3| : %d\n",f4);
}