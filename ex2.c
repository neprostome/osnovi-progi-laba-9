#include <stdio.h>

//ex 2

int main() {
    printf("How many minutes did you talk on the phone previous month\?\n");
    int min;
    scanf("%d", &min);
    printf("What is the fixed subscription fee for your tariff\?\n");
    int cost;
    scanf("%d", &cost);
    printf("How much is a minute of conversation over the limit\?\n");
    int overLim;
    scanf("%d", &overLim);
    if(cost / 499 > overLim){
        printf("You're lying! The cost of a minute of conversation over the limit should be higher than the cost of a minute according to the tariff! Before contact...\n");
        return 0;
    }
    if(min > 499){
        printf("For the past month, you should have paid:\n%d", cost + ((min - 499) * overLim));
        return 0;
    }
    else{
        printf("For the past month, you should have paid:\n%d", cost);
        return 0;
    }
    return 0;

}
