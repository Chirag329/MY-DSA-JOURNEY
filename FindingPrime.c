#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("enter the integer upto which you want to print the prime numbers: \n");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {

            if (i % j == 0)
            {
                is_prime = 0;
                break;
                
            }
        }
        if (is_prime)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
