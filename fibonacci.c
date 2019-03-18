#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=0,b=1,d,c;
printf("enter the number ");
scanf("%d",&n);
printf("%d fibonnaci series",n);
for(c=0;c<n;c++)
{
if(c<=1)
d=c;
else
{
d=a+b;
a=b;
b=d;
}
printf("%d",d);
}
return 0;
}
