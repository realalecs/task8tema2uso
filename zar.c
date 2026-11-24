#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int z1 = rand() % 6 + 1;
        int z2 = rand() % 6 + 1;

        if(z1 == 6 && z2 == 5) printf("Dau cu zaru %d %d n-am nevoie de servici\n", z1, z2);
        else if(z1 == 6 && z2 == 6) printf("Dau cu zaru %d %d ca mine nu se mai naste\n", z1, z2);
        else printf("Dau cu zaru %d %d\n", z1, z2);
        return 0;
}

