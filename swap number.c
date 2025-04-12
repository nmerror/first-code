#include <stdio.h>

int main() {
    int n, first_digit, last_digit, swap_sum, swapped_number;


    printf("Enter a number: ");
    scanf("%d", &n);


    last_digit = n % 10;

    // Extract the first digit
    first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Print the first and last digits
    printf("First digit = %d\n", first_digit);
    printf("Last digit = %d\n", last_digit);

    // Swap the first and last digits
    swapped_number = last_digit * 10 + (n % 10);  // Rebuild the number after swapping

    // Print the number after swapping the digits
    printf("Number after swapping first and last digits = %d\n", swapped_number);

    // Sum of swapped digits
    swap_sum = first_digit + last_digit;
    printf("The sum of the swapped digits = %d\n", swap_sum);

    return 0;
}

