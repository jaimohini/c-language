#include<stdio.h>
int fact(int n)
{
if(n==0)
return 1;
if(n<0)
printf("invalid input\n");
int fact=1,i;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int n;
printf("\n enter the number");
scanf("%d",&n);
printf("fctorial of the number %d is %d:\n",n,fact(n));
return 0;
}
