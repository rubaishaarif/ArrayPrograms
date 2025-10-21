#include <stdio.h>
int main() 
{
int A[6];
int size=6;


for(int i=0;i<size;i++) //take input
{
printf("Enter %d value of array: ",i);
scanf("%d",&A[i]);
}
int sum=0,i=0;
float avg;
while(i<size) //sum
{
    sum+=A[i];
    i++;
}
printf("sum= %d\n",sum);
printf("avg= %d\n", sum/size);

    return 0;
}