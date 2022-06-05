#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Input Value of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("sum of the even numbers: %d\n", sum);

    return 0;
}
