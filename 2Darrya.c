#include <stdio.h>

int main()
{
    int a[10][10],n,m,i,j;
    printf("enter the number of row and coloum");
    scanf("%d%d",&n,&m);
    printf("Enter the arrya elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
    scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              printf("%d \t",a[i][j]);
          }
          printf("\n");
      }
    return 0;
}
