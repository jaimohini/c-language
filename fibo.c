#include<stdio.h>

int main()
{
int i,c=0,n;
int a=0;
int b=1;
printf("\nEnter the nth value : ");
scanf("%d",&n);
printf("\nFibonacci series : ");
while(c<=n)
{
printf("%d ",c);
a=b;   // swap elements
b=c;
c=a+b; // next term is the sum of the last two terms
}
printf("\n");
return 0;
}

