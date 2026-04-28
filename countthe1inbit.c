#include<stdio.h>
int sum(int a)
{
  int count=0;
  while(a>0)
  {
    count+=a&1;
    a>>=1;
  }
  return count;
}
int main()
{
    int num,count1=0;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The Number of 1s in the binary repesentation is %d\n",sum(num));
    while(num>0)
    {
        count1+=num%2;
        num/=2;
    }
    printf("The number of 1s in the binary repesentation is %d",count1);
}