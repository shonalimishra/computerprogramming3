#include <stdio.h>
int main()
{
int i,num,positive=0,negative=0, zeros=0;

for(i=1;i<=200;i++)
{
printf("Enter number %d",i);
scanf("%d",&num);
if(num>0)
{
positive+=1;
}
else if(num<0)
{
negative+=1;
}
else if(num=0)
{
zeros+=1;
}
}
printf("No of positive values = %d",positive);
printf("No of negative values = %d",negative);
printf("No of zeroes = %d",zeros);
return 0;
}
