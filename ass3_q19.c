#include <stdio.h>
int main()
{
int i;

printf("Numbers divisible by 5 are: ");
for(i=1;i<=100;i++)
{
if (i%5==0)
{
printf(i);
}
}
return 0;
}
