#include<stdio.h>
int main()
{
int age;
printf("ENTER YOUR age :\n");
scanf("%d",&age);

if(age>18) {
    printf("you are above 18\n");
    printf("so you can vote\n");
}
else{
    printf("sorry you are below 18\n");
    printf("so you can not vote\n");
}
printf("THANK YOU\n");
return 0;
}