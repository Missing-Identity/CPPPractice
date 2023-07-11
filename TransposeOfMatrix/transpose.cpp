#include <stdio.h>
int main()
{
    int a[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,2}
    };
    int b[4][3], i, j, k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    /* Printing Matrix */
    printf("The transpose of the matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}