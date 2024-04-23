#include<stdio.h>
int main()
{
int day;//mon-1;tue-2;wed-3;thur-4;fri-5;sat-6;sun-7;
printf("enter day(1-7) : ");
scanf("%d",&day);

switch(day){
    case 1 : printf("monday \n");
    printf("THANK YOU\n");
    break;
    case 2 : printf("tuesday\n");
    printf("THANK YOU\n");
    break;
    case 3 : printf("wednesday\n");
    printf("THANK YOU\n");
    break;
    case 4 : printf("thursday\n");
    printf("THANK YOU\n");
    break;
    case 5 : printf("friday\n");
    printf("THANK YOU\n");
    break;
    case 6 : printf("saturday\n");
    printf("THANK YOU\n");
    break;
    case 7 : printf("sunday\n");
    printf("THANK YOU\n");
    break;

    default : printf("NOT A VALID INPUT\n");

    printf("THANK YOU\n");
    
}
return 0;
}