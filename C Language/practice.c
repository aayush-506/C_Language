#include<stdio.h>
int main()
{
int marks;
printf("PLEASE ENTER YOUR marks[0-100] \n");
scanf("%d",&marks);

if(marks > 30 && marks <=100){
    printf("PASS\n");
     if(marks >= 90 && marks <= 100){
        printf("VERY GOOD \n");
    }
}
else if(marks >= 00 && marks <= 30){
    printf("FAIL\n");
    printf("WORK HARD!!!!!\n");
    printf("better luck next time\n");
   
}

else{
    printf("INVALID INPUT\n");

}
printf("THANK YOU \n");

return 0;
}