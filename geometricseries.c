#include<stdio.h>
#include<math.h>
int main()
{
int input;
scanf("%d",&input);
if(input%2==0)
{
int num=input/2;
int x=num-1;
int output=pow(3,x);
printf("%d",output);
}
else
{
int num=(input+1)/2;
int x=num-1;
int output=pow(2,x);
printf("%d",output);
}
}
