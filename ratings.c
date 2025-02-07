#include <stdio.h>

int main() {
    int n, i, ratings[100], freq[6] = {0};//To store the count of occurence
    int maxfreq = 0, mostfreq;

    printf("Enter number of ratings: ");
    scanf("%d", &n);

    printf("Enter ratings from 1 to 5\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
        freq[ratings[i]]++; // Count occurrences
    }

    for (i = 1; i <= 5; i++) {//checking the occurence of each rating to find the max
        if (freq[i] > maxfreq) {
            maxfreq = freq[i];
            mostfreq = i;
        }
    }

    printf("Most frequent rating: %d\n", mostfreq);
    return 0;
}
