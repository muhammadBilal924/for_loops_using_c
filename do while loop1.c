#include<stdio.h>
int main()
{
int c,num,f;
c=1;
f=1;
printf("Enter a number");
scanf("%d",&num);
do
{
f=f*c;
c=c+1;
}
while(c<=num);
printf("factorial of%d is%d",num,f);
}
