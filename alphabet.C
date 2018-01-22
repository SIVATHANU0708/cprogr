#include<stdio.h>
int main()
{
char ch;
printf("enter the charcter:");
scanf(%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
return 0;
}
