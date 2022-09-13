#include <stdio.h>

int main() {
    printf("Enter the annual interest rate for your bank account:\n");
    float yearper;
    scanf("%f", &yearper);
    //printf("%f\n", (yearper / 12));
    printf("Enter the amount of money in your bank account initially:\n");
    int start;
    scanf("%d", &start);
    printf("Enter the number of months that the money will be in the bank account:\n");
    int month;
    scanf("%d", &month);
    //int monper = yearper / 12;
    //printf("%d\n", monper);
    for(int i = 1; i <= month; i++){
        float dox = start * (yearper / 12);
        start = start + dox;
        printf("%d month: %d\n", i, start);
    }
    return 0;
}
