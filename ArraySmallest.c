#include <stdio.h>
#include<limits.h>


int main() {
int n[5]={90,66,-7,22,80};
int size=5;
int smallest=INT_MAX;
for(int i=0;i<size;i++)
{
    if(n[i]<smallest)
    smallest=n[i];
}
printf("The smallest is %d",smallest);
    return 0;
}