#include<stdio.h>
int main()
{
int n,c;
c=1;
printf("Enter a number");
scanf("%d",&n);
while(c<=10)
{
printf("%d*%d=%d\n",n,c,n*c);
c=c+1;
}
}
