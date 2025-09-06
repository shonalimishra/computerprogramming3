#include <stdio.h>
int main()
{
int n,num,rem,cube,sum=0;

printf("Enter a number: ");
scanf("%d" , &num);
n = num;
while (num>0)
{
rem = num%10;
cube = rem*rem*rem;
sum +=cube;
num = num/10;
}

if(n==sum)
{
printf("Armstrong number\n");
}
else
{
printf("Not an armstrong number\n");
}
return 0;
}
