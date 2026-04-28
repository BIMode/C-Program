#include<stdio.h>
int main()
{
    int marks[5],sum=0,avg;
      printf("Enter a 5  mark for subject");
   for(int i=0;i<5;i++)
    {
    scanf("%d",&marks[i]);
    }    
    while (getchar() != '\n');
      
     for(int i=0;i<5;i++)
    {
    sum+=marks[i];
    } 
     printf("The Total marks is %d\n",sum);
     avg=sum/5;
    printf("The Average mark is %d\n",avg);
    if(avg>=90)
    { 
        printf("\nGrade A");
    }
    else if(avg>=80 && avg<90)
    { 
        printf("\nGrade B");
    }
    else if(avg>=70 && avg<80 )
    { 
        printf("\nGrade C");
    }
    else  if(avg>=60 && avg<70)
    { 
        printf("\nGrade D");
    }
    else if(avg>=50 && avg <60)
    { 
        printf("\nGrade E");
    }
    else if(avg>=40 && avg <50)
    { 
        printf("\nGrade F");
    }
    else if(avg<40)
    { 
        printf("\nGrade Fail");
    }
}   