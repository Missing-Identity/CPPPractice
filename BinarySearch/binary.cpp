#include <stdio.h>

int main()
{
    int a[10], l, r, mid, val, i;
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    l = a[9];
    r = a[0];
    mid = (l + r) / 2;
    printf("Enter the value to be searched:\n");
    scanf("%d", &val);
    while (l <= r)
    {
        if (val > a[mid])
        {
            r = mid - 1;
        }
        else if (val < a[mid])
        {
            l = mid + 1;
        }
        else
        {
            printf("The value is found at index %d\n", mid);
            break;
        }
        mid = (l + r) / 2;
    }

    if (l > r)
    {
        printf("The value is not found.\n");
    }

    return 0;
}
