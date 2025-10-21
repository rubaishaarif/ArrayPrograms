#include <stdio.h>
int main() 
{
int A[3][3]={
    {2,4,7},{0,10,66},{44,0,7}
    };
    int count=0;
for(int i=0;i<3;i++) 
{
    for(int j=0;j<3;j++)
    {
        if(A[i][j]==0)
        {
            count++;
        }
    }
}
    if(count>=((3*3)/2))
    {
        printf("Sparse Matrix");
    }
    else
    printf("Not a Sparse Matrix");
    return 0;
}


