#include<stdio.h>
int main()
{
int x=10;
int i=10;
int j=10;
int y;

y=i++ + ++j;
x=x++ + ++x;
printf("x=%d y=%d",x,y);

return 0;
}