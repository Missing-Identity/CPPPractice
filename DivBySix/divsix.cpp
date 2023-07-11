#include <stdio.h>

void divsix(int n)
{
    if (n % 6 == 0)
    {
        printf("The number is divisible by 6\n");
    }
    else
    {
        printf("The number is not divisible by 6\n");
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    divsix(n);
}
