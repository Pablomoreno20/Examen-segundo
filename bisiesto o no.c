#include<stdio.h>

int main() {
    int year;

    // Solicitar al usuario que ingrese un a�o
    printf("Ingrese un a�o: ");
    scanf("%d", &year);

    // Verificar si es bisiesto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d es un a�o bisiesto.\n", year);
    } else {
        printf("%d no es un a�o bisiesto.\n", year);
    }

    return 0;
}
