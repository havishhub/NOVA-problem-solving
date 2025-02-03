#include <stdio.h>

int calculateMaxCustomers(int total_stoves, int available_minutes);

int main() {
    int total_stoves, available_minutes;
    scanf("%d %d", &total_stoves, &available_minutes);
    
    int max_customers = calculateMaxCustomers(total_stoves, available_minutes);
    printf("%d", max_customers);
    
    return 0;
}

int calculateMaxCustomers(int total_stoves, int available_minutes) {
    return total_stoves * available_minutes;
}
