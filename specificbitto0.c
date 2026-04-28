#include <stdio.h>
int main() {
    int number, bitPosition;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter the bit position to set (0-indexed): ");
    scanf("%d", &bitPosition);
    int result = number ^ (1 << bitPosition);
    printf("Original number: %d\n", number);
    printf("Number after setting bit %d: %d\n", bitPosition, result);
}
