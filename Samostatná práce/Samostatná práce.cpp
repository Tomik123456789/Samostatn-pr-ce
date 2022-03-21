

#include <stdio.h>

int main()
{
    int cislo = 0;
    int suda = 0;
    int licha = 0;
    printf("zadejte libovolne cislo: \n");
    scanf("%d", &cislo);
    for (int i = 1; i <= cislo; i++) {
        if (i % 2 == 0) {
            suda += i;
        }
        else (i % 2 != 0); {
            licha += i;
        }
    }
    printf("soucet sudych cisel je: %d\n", suda);
    printf("soucet lichych cisel je: %d\n", licha);
}

