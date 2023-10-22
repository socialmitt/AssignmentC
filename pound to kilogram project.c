#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("degrees celcius\tfarenheit\n");
    printf("----------------\t---------\n");
    float celcius, farenheit;
    for(celcius = 0; celcius <=100; celcius += 10)
    {
        farenheit = (celcius * 9/5) + 32;
        printf("%.2f\t\t%.2f\n", celcius, farenheit);
    }

    return 0;
}
