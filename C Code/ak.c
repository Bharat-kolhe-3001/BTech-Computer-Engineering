#include <stdio.h>
void decimalToBinary(int decimal);

int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    decimalToBinary(number);
    return 0;
}

void decimalToBinary(int decimal) {
    int binary[32]; // Assuming the maximum number of bits needed for the binary representation
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary equivalent: ");
    if (i == 0)
        printf("0");
    else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    printf("\n"); // Add a new line after printing binary equivalent
}
