
#include <stdio.h>
int main() 
{
char Fname[12];
char Lname[12];

printf("enter first name: ");
scanf("%s",&Fname);
printf("enter last name: "); 
scanf("%s",&Lname);

printf("first name: %s ,",Fname);
printf("first name: %s ,",Lname);
printf("full name: %s %s",Fname, Lname );
    return 0;

}