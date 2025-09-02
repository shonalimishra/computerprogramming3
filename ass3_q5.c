#include <stdio.h>
int main()
{
int i=1,n,count;
printf("Enter the value of n");
scanf("%d",&n);

for(count=1;count<=n;count++)
{
printf("%d\n",i);
i+=2;
}
return 0;
}
