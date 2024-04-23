#include<stdio.h>
#include<string.h>

struct employee
{
    char name[50];
    int id;
    float salary;

};

int main()
{
    int n;
    scanf("%d",&n);
struct employee a[n];
int i;
for(i=0;i<n;i++)
{
    printf("enter id ");
    scanf("%d",&a[i].id);
    printf("enter name ");
    gets(a[i].name);
    printf("enter salary ");
    scanf("%f",&a[i].salary);
    

}
for(i=0;i<n;i++);
{
    if(a[i].salary>5000)
    {
    printf("enter id%d ",a[i].id);
    puts(a[i].name);
    printf("enter salary %f ",a[i].salary);

    }
}


return 0;
}