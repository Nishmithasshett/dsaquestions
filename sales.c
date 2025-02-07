#include <stdio.h>

int main() {
    int sales[] = {120, 340, 560, 230, 450, 780, 690}; 
    int size = sizeof(sales) / sizeof(sales[0]); 

    int maxSales = sales[0]; 
    int day = 0; 

    // Find the highest sales day
    for (int i = 1; i < size; i++) {
        if (sales[i] > maxSales) {
            maxSales = sales[i];
            day = i;
        }
    }
    printf("The highest sales were on day %d with %d sales.\n", day + 1, maxSales);

    return 0;
}
