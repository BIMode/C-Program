#include<stdio.h>
int main()
{
    int array[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter a element[ %d ]=",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("The Entered element are:%d\n",array[i]);
    }
    int temp=array[0];
    for(int j=0;j<5;j++)
    {
        if(temp>=array[j])
        {
            temp=array[j];
        }
    }
    printf("The samllest element in array is %d",temp);
}