#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, 3);  // For 3-digit numbers
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}