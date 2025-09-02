#include <stdio.h>
int main()
{
int i,n,count=0,sum=0;

printf("Enter the value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum+=count;
count = count+2;
}
printf("Sum = %d",sum);
return 0;
}
