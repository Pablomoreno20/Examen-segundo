#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 

{
int num1,num2,operacion=0, rtd;
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));

    while (operacion<=4) 
	{ 
	// Bucle infinito
        int operacion = rand() % 5 + 1; 
		// Generar un número aleatorio entre 1 y 5

        printf("Operación: %d\n", operacion);
        switch (operacion)
            {
      printf ("\n\n");
      case 1:
      	num1= rand();
      	num2= rand ();
      	rtd= num1 + num2;
 	  printf ("%d+ %d = %d\n\n", num1,num2, rtd);
 	  rtd=0;
      break;
 
      case 2:
      	num1= rand();
      	num2= rand ();
      	rtd= num1 - num2;
      printf ("%d - %d = %d\n\n", num1, num2, rtd);
      break;

     case 3:
     	num1= rand();
      	num2= rand ();
      	rtd= num1 * num2;
    printf ("%d * %d = %d\n\n", num1, num2,rtd);

     break;

     case 4:
     	num1= rand();
      	num2= rand ();
      	rtd= num1 / num2;
     printf ("%d / %d = ", num1, num2,rtd) ;

       
    }
     if (operacion == 5) 
		{
            printf("Operación 5 encontrada. Terminando el programa.\n");
            break; // Salir del bucle cuando se encuentra una operación igual a 5
        }
    }
    return 0;
    }

