//Case 02 - customizeable Input qty with 1,2,3 number (for, switch)
// Sayyid Dzaky A - 2306171846
// Hizkia Karl Anugrah Nusa - 2306254810
// 15/3/2024
// Version 1.1


#include <stdio.h>
#include <string.h>

int main() {
    int input_num, frequency_1 = 0, frequency_2 = 0, frequency_3 = 0;
    int user_loop_amount, loop_amount;
    char histogram1[100], histogram2[100], histogram3[100];
    histogram1[0] = '\0'; 
    histogram2[0] = '\0';
    histogram3[0] = '\0';
    int i; 

    do {
        printf("Enter the amount of times you want to input a number (positive whole number): ");
        scanf("%d", &user_loop_amount);

        if (user_loop_amount <= 0) {
            printf("Please enter a positive whole number.\n");
        }

    } while (user_loop_amount <= 0);

    printf("Enter a number %d times\n", user_loop_amount);

    for (loop_amount = 0; loop_amount < user_loop_amount; ++loop_amount) {
        printf("Enter number %d: ", loop_amount + 1);
        scanf("%d", &input_num);

        if (input_num < 1 || input_num > 3) {
            printf("Invalid input. Please enter a number ranging from 1, 2, or 3.\n");
            --loop_amount;
        } else {
            switch (input_num) {
                case 1:
                    ++frequency_1;
                    break;
                case 2:
                    ++frequency_2;
                    break;
                case 3:
                    ++frequency_3;
                    break;
            }
        }
    }

    // Print histograms

    printf("\nHistogram of the data:\n");

    printf("Number 1: ");
    for (i = 0; i < frequency_1; ++i) {
        printf("#");
    }
    printf("\n");

    printf("Number 2: ");
    for (i = 0; i < frequency_2; ++i) {
        printf("#");
    }
    printf("\n");

    printf("Number 3: ");
    for (i = 0; i < frequency_3; ++i) {
        printf("#");
    }
    printf("\n");

    return 0;
}

