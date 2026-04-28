#include<stdio.h>
int main()
{
        int array[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter a element[ %d ]=",i);
        scanf("%d",&array[i]);
    }
  /*  for(int i=0;i<5;i++)
    {
        printf("The Entered element are:%d\n",array[i]);
    }*/
    int sum=0;
    for(int j=0;j<5;j++)
    {
        sum+=array[j];
    }
    printf("The sum of the array is %d",sum);
}