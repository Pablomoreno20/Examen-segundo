#include<stdio.h>

int main() {
    int year;

    // Solicitar al usuario que ingrese un año
    printf("Ingrese un año: ");
    scanf("%d", &year);

    // Verificar si es bisiesto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d es un año bisiesto.\n", year);
    } else {
        printf("%d no es un año bisiesto.\n", year);
    }

    return 0;
}
