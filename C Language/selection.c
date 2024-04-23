#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_ind])
            {
                min_ind=j;
            }
        }
        swap(&a[min_ind],&a[i]);
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {printf(" %d ",a[i]);
    }
    printf("\n");
}
int main()
{
int a[]={2,7,10,16,20,6};
int n=6;
selection(a,n);
printf("sorted");

print(a,n);
return 0;
}