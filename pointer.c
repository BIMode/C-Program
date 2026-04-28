#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);           // Value of a
    printf("Address of a: %p\n", &a);        // Address of a
    printf("Pointer value: %p\n", ptr);      // Pointer value (address of a)
    printf("Value via pointer: %d\n", *ptr); // Value of a using pointer

    return 0;
}
