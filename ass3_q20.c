#include <stdio.h>
int main()
{
int i,sum=0;

for(i=1;i<=100;i++)
{
if (i%3==0)
{
sum+=i;
}
}
printf("Sum of all no.s divisible by 3 = %d",sum);
return 0;
}
