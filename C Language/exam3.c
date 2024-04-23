#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a and b \n");
scanf("%d%d",&a,&b,&c);
printf("the value of a and b before swapping are %d and %d",a,b);
c=a;
a=b;
b=c;
printf("the value odf a and b after swapping are %d and %d\n",a,b);

return 0;
}