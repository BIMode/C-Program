#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
      printf("A greater value is %d",a);
    else if(b>a&&b>c)
      printf("B greater value is %d",b);
      else
      printf(" C greater value is %d",c);

}