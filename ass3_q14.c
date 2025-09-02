#include <stdio.h>
int main()
{
int i,num,mean,sum=0;

for(i=1;i<=10;i++)
{
printf("Enter number %d",i);
scanf("%d",&num);
sum = sum +num;
mean= sum/10;
}
printf("Sum = %d",sum);
printf("Mean = %d",mean);
return 0;
}
