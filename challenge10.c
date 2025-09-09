#include <stdio.h>


int main(){
  
  float T[10];
  float Moy;
  int nbr ;
  int sum=0;
  int j=0;

  printf("entres les valeur de tableau:");
  for (int i = 0; i < 10; i++)
  {
    printf("T[%d]:",i);
    scanf("%f",&T[i]);
    sum = sum + T[i];
  }
  Moy = sum /10;
  for (int  i = 0; i < 10; i++)
  {
    if (T[i]>Moy)
    {
      j=j+1;
    }
  }
  printf("le moyenne de tableau est :%2.f\n",Moy);
  printf("les note a superier a la moyenne est :%d",j);



  
}