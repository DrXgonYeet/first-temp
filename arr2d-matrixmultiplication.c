#include <stdio.h>
int main()
{
    int i,j,m,n,p,q,k;
    printf("Enter the dimensions of the first array:\n");
    scanf("%%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the first array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the dimensions of the second array:\n");
    scanf("%%d%d",&p,&q);
    int b[p][q];
    printf("Enter the elements of the second array:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("Matrix multiplication not possible--");
        return 0;
    }
    int c[m][q];
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("The matrix multiplication of the given arrays is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
