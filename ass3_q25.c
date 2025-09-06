#include <stdio.h>
int main()
{
int n,num,rem,rev=0;

printf("Enter a number: ");
scanf("%d" , &num);
n = num;
while (num>0)
{
rem = num%10;
rev=rev*10+rem;
num = num/10;
}

if(n==rev)
{
printf("Palindrome number\n");
}
else
{
printf("Not a palindrome number\n");
}
return 0;
}
