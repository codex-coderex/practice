#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

void displayIntegers(int arr[]);
void reverseOrderIntegers(int arr[]);
void limitingArgument(int arr[]);
void displayAboveAverage(int arr[]);

int main() {
    int arr[10];
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100;
    }

    displayIntegers(arr);
    reverseOrderIntegers(arr);
    limitingArgument(arr);
    displayAboveAverage(arr);
}

void displayIntegers(int arr[]) {
    printf("Array Elements: ");
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d ", arr[i]);
        }
    printf("\n");
    }

void reverseOrderIntegers(int arr[]) {
    printf("Reversed Order: ");
        for (int i = ARRAY_SIZE - 1; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
    printf("\n\n");
    }

void limitingArgument(int arr[]) {
        srand(time(NULL));

        int limitingArgumentIndex = rand() % ARRAY_SIZE;
        int limitingInteger = arr[limitingArgumentIndex];

        printf("Limiting Argument = %d\n", limitingInteger);
        printf("Elements: ");
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (arr[i] < limitingInteger) {
                printf("%d ", arr[i]);
            }
        }

        printf("\n\n");

    }

void displayAboveAverage(int arr[]) {

    double sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += arr[i];
    }

    double inputAverage = sum / ARRAY_SIZE;

    printf("Average = %.2f\n", inputAverage);
    printf("Elements: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] > inputAverage) {
            printf("%d ", arr[i]);
        }
    }

}
