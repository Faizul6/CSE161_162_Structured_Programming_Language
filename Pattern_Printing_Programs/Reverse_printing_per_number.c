#include <stdio.h>
int main()
{
    int row,col,n;
    printf("Number of Columns= ");
    scanf("%d",&n);
    for (row = n; row>=1; row--)
    {
     for (col = 1; col <= row; col++)
     {
      printf("%d ",row);
     }
     printf("\n");
    }
    return 0;
}


