#include <stdio.h>

int main()
 {
    int V1, V2,V3, temp;

    printf("Introduce el valor de V1: ");
    scanf("%d", &V1);

    printf("Introduce el valor de V2: ");
    scanf("%d", &V2);
    
	printf("Introduce el valor de V3: ");
    scanf("%d", &V3);
    // Intercambiar los valores de a y b utilizando una variable temporal
    temp = V1;
    V1 = V2;
    V2 = V3;
    V3 = temp;

    printf("Después del intercambio:\n");
    printf("V1 = %d\n", V1);
    printf("V2 = %d\n", V2);
    printf("V3 = %d\n", V3);

    return 0;
}
