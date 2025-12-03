#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int frequency[13] = { 0 };   
    int d1, d2, sum;
    int i;

    srand(time(0));

   
    for (i = 0; i < 36000; i++)
    {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        sum = d1 + d2;
        frequency[sum]++;
    }


    printf("點數\t出現次數\n");
    for (i = 2; i <= 12; i++)
    {
        printf("%2d\t%5d\n", i, frequency[i]);
    }

  
    printf("\n理論上 7 的機率最高，因為共有 6 種組合產生 7。\n");
    printf("因此結果中 7 應接近 36000 × (6/36) ? 6000 次。\n");

    return 0;
}
