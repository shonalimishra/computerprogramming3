#include <stdio.h>
int main()
{
int i,boys =0, girls=0;
char sex;

for(i=1;i<=50;i++)
{
printf("Enter sex of student %d",i);
scanf("%c",&sex);
if(sex == 'M'|| sex == 'm')
{
boys+=1;
}
else if(sex == 'F'|| sex == 'f')
{
girls+=1;
}
else
{
printf("Invalid value, considering as skip!");
}
}
printf("No of boys = %d",boys);
printf("No of girls = %d",girls);
return 0;
}
