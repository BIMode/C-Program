#include<stdio.h>
int main()
{
int arr[3] = {10, 20, 30};
int *ptr = arr; // Points to the first element of the array
printf("%d\n", *ptr++);   // 10
ptr++;
printf("%d\n", *ptr);   // 20
ptr++;
printf("%d\n", *ptr);  
}
