#include <stdio.h>
int main()
{
int num,i,count=0;

printf("Enter a number: ");
scanf("%d" , &num);

for(i=1;i<=num/2;i++)
{
if(num%i==0)
{
count+= 1;
}
}
if(count==1)
{
printf("Prime number\n");
}
else
{
printf("Not a prime number\n");
}
return 0;
}
