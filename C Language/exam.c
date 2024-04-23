#include<stdio.h>
int main()
{
float s1,s2,s3,s4,s5,score;
float sum=0;
printf("Enter the marks of s1,s2,s3,s4,s5\n",s1,s2,s3,s4,s5);
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
printf("the sum is %f\n",&sum);
score=(sum/500)*100;
printf("the score is %f\n",score);

return 0;
}