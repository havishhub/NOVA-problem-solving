#include <stdio.h>

int main() {
    int threshold_limit, current_rate;
   // printf("Enter threshold limit and current rate: ");
    scanf("%d %d", &threshold_limit, &current_rate);

    if (current_rate > threshold_limit) {
        printf("YES");  // Prints 'YES' if it exceeds the threshold
    } else {
        printf("NO");   // Prints 'NO' if within or below the threshold
    }

    return 0;
}
