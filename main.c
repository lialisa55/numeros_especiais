#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int i = 1000; i < 10000; i++){
        int a = i/100;
        int b = i%100;

        if ((a+b) == sqrt(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}
