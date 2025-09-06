#include <stdio.h>
int main()
{
int num,rem,count=0;

printf("Enter a number: ");
scanf("%d" , &num);

while (num>0)
{
rem = num%10;
count+=1;
num = num/10;
}
printf("Number of digits: %d\n",count);
return 0;
}
