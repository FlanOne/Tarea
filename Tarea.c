#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void suma(int *a, int *b)
{ *a=*a+*b; }

void resta(int *a, int *b)
{ *a=*a-*b; }

void multiplicacion(int *a, int *b)
{ *a=(*a)*(*b); }

void division(float *a, float *b)
{ *a=*a/(*b); }

void potencia(int *a, int *b)
{ *a=pow(*a,*b); }

void promedio(float *a, float *b)
{ *a=*a/(*b); }

int main(int argc, char const *argv[])
{
  int opcion;
  int cantd;
  int *n1,*n2;
  float *n3,*n4;
  float *cantidad,*cont,*num;

  n1=malloc(sizeof(int)*10);
  n2=malloc(sizeof(int)*10);
  n3=malloc(sizeof(float)*10);
  n4=malloc(sizeof(float)*10);
  cantidad=malloc(sizeof(float)*10);
  num=malloc(sizeof(float)*10);
  cont=malloc(sizeof(float)*10);

  do
  {
    printf("\n##########################################");
    printf("\n---------------[CALCULADORA]--------------");
    printf("\n[1] Calcular suma");
    printf("\n[2] Calcular resta");
    printf("\n[3] Calcular multiplicacion");
    printf("\n[4] Calcular Division");
    printf("\n[5] Calcular potencia");
    printf("\n[6] Calcular promedio");
    printf("\n[7] Salir");
    printf("\n------------------------------------------");
    printf("\n##########################################");

    do
    {
      printf("\nIngrese una opcion: ");
      scanf("%d", &opcion);
    }while(opcion<1 || opcion>7);

    switch(opcion)
    {
      case 1: printf("\n-------------------[SUMA]-----------------");
              printf("\nCuantos numeros va a sumar: "); 
              scanf("%i",&cantd);
              printf("\n");

              if(cantd>0)
              {
                printf("Ingrese un numero: "); 
                scanf("%i",&*n1);

                for(int x=0;x<(cantd-1);x++)
                {
                  printf("Ingrese un numero: "); 
                  scanf("%i",&*n2);
                  suma(n1,n2);
                }
                printf( "\nLa suma es: %i",*n1);
                printf("\n");
              }
              else
              {
                printf( "No es posible trabajar sin datos");
                printf( "\nIntente nuevamente");
              }
              printf("\n");

              free(n1);
              free(n2);
              break;

      case 2: printf("\n------------------[RESTA]-----------------");
              printf("\nCuantos numeros va a restar: "); 
              scanf("%i",&cantd);
              printf("\n");

              if(cantd>0)
              {
                printf("Ingrese un numero: "); 
                scanf("%i",&*n1);

                for(int x=0;x<(cantd-1);x++)
                {
                  printf("Ingrese un numero: "); 
                  scanf("%i",&*n2);
                  resta(n1,n2);
                }
                printf( "\nLa resta es: %i",*n1);
                printf("\n");
              }
              else
              {
                printf( "No es posible trabajar sin datos");
                printf( "\nIntente nuevamente");
              }
              printf("\n");

              free(n1);
              free(n2);
              break;

      case 3: printf("\n-------------[MULTIPLICACION]-------------");
              printf("\nCuantos numeros va a multiplicar: "); 
              scanf("%i",&cantd);
              printf("\n");

              if(cantd>0)
              {
                printf("Ingrese un numero: "); 
                scanf("%i",&*n1);

                for(int x=0;x<(cantd-1);x++)
                {
                  printf("Ingrese un numero: "); 
                  scanf("%i",&*n2);
                  multiplicacion(n1,n2);
                }
                printf( "\nLa multiplicacion es: %i",*n1);
                printf("\n");
              }
              else
              {
                printf( "No es posible trabajar sin datos");
                printf( "\nIntente nuevamente");
              }
              printf("\n");

              free(n1);
              free(n2);
              break;

      case 4: printf("\n-----------------[DIVISION]---------------");
              printf("\nCuantos numeros va a dividir: "); 
              scanf("%i",&cantd);
              printf("\n");
              
              if(cantd>0)
              {
                printf("Ingrese un numero: "); 
                scanf("%f",&*n3);

                for(int x=0;x<(cantd-1);x++)
                {
                  printf("Ingrese un numero: "); 
                  scanf("%f",&*n4);
                  division(n3,n4);
                }
                if(*n3!=0 && *n4!=0)
                {
                  printf( "\nLa division es: %f",*n3);
                  printf("\n");
                }
                else
                {
                  printf( "\nNo es posible dividir entre 0.");
                } 
              }
              else
              {
                printf( "No es posible trabajar sin datos");
                printf( "\nIntente nuevamente");
              }
              printf("\n");

              free(n3);
              free(n4);
              break;

      case 5: printf("\n-----------------[POTENCIA]---------------");
              printf("\nIngrese un numero: "); 
              scanf("%i",&*n1);
              printf("Ingrese una potencia: "); 
              scanf("%i",&*n2); 
              potencia(n1,n2);             
              printf("\nLa potencia es: %i",*n1);
              printf("\n");
              free(n1);
              free(n2);
              break;

      case 6: printf("\n----------------[PROMEDIO]----------------");
              printf("\nCuantos numeros quiere promediar: ");
              scanf("%f",&*cantidad);
              printf("\n");

              if(*cantidad>0)
              {
                for(int x=0;x<*cantidad;x++)
                {
                  printf("Ingrese un numero: ");
                  scanf("%f",&*num);
                  *cont=*cont+*num;
                }              
                promedio(cont,cantidad);
                printf( "\nLa promedio es: %f",*cont);
                printf("\n");
              }
              else
              {
                printf( "No es posible trabajar sin datos");
                printf( "\nIntente nuevamente");
              }
              printf("\n");

              free(cont);
              free(cantidad);
              break;
    }
  }while(opcion!=7);
  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(cantidad);
  free(num);
  free(cont);
  return 0;
}