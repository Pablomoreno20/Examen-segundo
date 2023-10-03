#include <stdio.h>


int main()
 {
 	int i;
    for ( i = 1; i <= 100; i++) 
	{
        if (i % 3 == 0) 
		{
            printf("%d es múltiplo de 3\n", i);
        } 
		else 
		{
            printf("%d no es múltiplo de 3\n", i);
        }
    }
    return 0;
}
