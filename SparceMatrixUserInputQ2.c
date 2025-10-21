#include <stdio.h>
int main() 
{
    int m,n;
    int count=0;
printf("enter no. of rows: "); //take rows
scanf("%d",&m);
printf("enter no. of coloumns: "); //take col
scanf("%d",&n);
int A[m][n];

for(int i=0;i<m;i++) //input
{
    printf("\n enter elements for row %d : ", i);
    for(int j=0;j<n;j++)
    {
        printf("\n enter element %d: ", j);
       scanf("%d",&A[i][j]);
    }
}
for(int i=0;i<m;i++) //print
{
    for(int j=0;j<n;j++)
    {
       printf("%d ",A[i][j]);
    }
    printf("\n");
}
for(int i=0;i<m;i++) //sparse
{
    for(int j=0;j<n;j++)
    {
        if(A[i][j]==0)
        {
            count++;
        }
    }
}
    if(count>=((m*n)/2))
    {
        printf("Sparse Matrix");
    }
    else
    printf("Not a Sparse Matrix");

    return 0;

}
