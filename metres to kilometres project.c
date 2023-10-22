#include <stdio.h>
#include <stdlib.h>

int main()
{
    int metres;
    double kilometres;
    printf("metres\tkilometres\n");
    printf("-------\-----------\n");

    for (metres = 100; metres <= 1000; metres += 100)
    {
        kilometres = metres / 1000.0;
        printf("%d\t%.3f\n" , metres, kilometres);
    }

    return 0;
}
